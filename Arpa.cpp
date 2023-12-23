// God & me
// "Someone like you"?! Unbelievable ...
#include <bits/stdc++.h>
using namespace std;

const int maxn = 2e5 + 17;
int n, x, cnt[maxn];
long long ans;
int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> n >> x;
    for(int i = 0, a; i < n; i++){
	cin >> a;
	ans += cnt[a ^ x];
	cnt[a]++;
    }
    cout << ans << '\n';
    return 0;
}
