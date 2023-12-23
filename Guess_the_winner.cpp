#include <iostream>
#include <vector>

using namespace std;

vector<int> sieve(int n) {
    vector<int> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    
    for (int i = 2; i * i <= n; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    
    vector<int> prime_factors;
    for (int i = 3; i <= n; ++i) {
        if (is_prime[i] && i % 2 != 0) {
            prime_factors.push_back(i);
        }
    }
    return prime_factors;
}

int main() {
   //int t; cin>>t;while(t--)
   {
     int n;
     cin >> n;
    vector<int> odd_prime_factors = sieve(n);
    int l = odd_prime_factors.size();
    // n=n-odd_prime_factors[l-1];
    // odd_prime_factors.clear();
    // vector<int> odd_prime_factors = sieve(n);

    for (int prime : odd_prime_factors) {
        cout << prime << " ";
    }
    cout << endl;
   }
    
    return 0;
}
