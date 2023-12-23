/**
 *   author: MD. MAJNU MIAH
 *   created  : Dec 19 2023 19:30:43
**/

#pragma GCC optimize("O3")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize ("Ofast,no-stack-protector", "omit-frame-pointer", "inline", "-ffast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,sse4.2,fma,popcnt,abm,mmx,avx")

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef set<int>                    si    ;
typedef set<ll>                     sl    ;
typedef vector<int>                 vi    ;
typedef vector<ll>                  vl    ;
typedef vector<int,int>             vii   ;
typedef vector<ll,ll>               vll   ;
typedef pair<int,int>               pii   ;
typedef pair<ll,ll>                 pll   ;
typedef map<int,int>                mp    ;
typedef map<ll,ll>                  MP    ;
typedef vector<pll>                 vpll  ;
typedef vector<pii>                 vpii  ;
#define sz(v)                        (ll)(v).size()
#define all(v)                       (v).begin(), (v).end()
#define rsort(v)                     sort(v.rbegin(),v.rend());
#define rev(s)                       reverse((s).begin(),(s).end())
#define cc                           cout
#define nl                           "\n"
#define F                            first
#define S                            second
#define Y                            "YES\n"
#define N                            "NO\n"
#define in(n)                        ll n; cin >> n;
#define inp(v,n)                     vector<ll>v(n); for(auto &a: v) cin >> a;
#define OP(ans)                      cc<<ans<<nl;
#define dbg(x)                       cerr<<"#dbg = "<<(x)<<nl;
#define NL                           cc << nl;
#define FOR(v)                       for(auto u : (v))
#define print(v)                     for(auto a: v) cout << a<< " "; cout << endl;
#define OP2D(v)                      FOR(v) {FOR(u) cc << u << ' '<<nl;}
#define fr(i,a,b)                    for(ll i=a; i<(ll)b; i++)
#define rf(i,a,b)                    for(ll i =a; i>=(ll)b; i--)
#define ins                          insert
#define pb                           push_back
#define TC                           in(tc); while(tc--)
#define DT                           cerr<<__DATE__<<" "<<__TIME__<<nl<<__FILE__<<nl;
#define FastIO                       ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve()
{
    in(n);   //inp(v,n);

}
int main()
{
   FastIO;
   TC    
   solve();
   DT
}
