 
#pragma GCC optimize("O3")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize ("Ofast,no-stack-protector", "omit-frame-pointer", "inline", "-ffast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,sse4.2,fma,popcnt,abm,mmx,avx")

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pll> vpll;
typedef vector<pii> vpii;

#define sz(v) (int)(v).size()
#define all(v) (v).begin(), (v).end()

#define F first
#define S second

void solve() {
    ll n, k, x;
    cin >> n >> k >> x;
    ll l1 = 0, l2 = 0;
    for (int i = 1; i <= k; i++)
        l1 += i;
    for (int i = 0; i < k; i++)
        l2 += (n - i);
    if (x >= l1 && x <= l2)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
