/*
 *   author: MD. MAJNU MIAH
 *   created  : Dec  4 2023 09:38:03
 */

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

#define sf(x)                        ll x; scanf("%ld",&x);
#define pf(x)                        printf("%ld\n",x);
#define in2(a,b)                     ll a,b; cin >> a >> b;
#define in3(a,b,c)                   ll a,b,c; cin >> a >> b >> c;
#define inS(s)                       string s; cin >> s;
#define instr(s,n)                   vector<string>s(n); for(auto &u: s) cin >> u;
#define mx(v)                        *max_element(all(v))
#define mn(v)                        *min_element(all(v))
#define uniq(v)                      unique(all(v))
#define uniqsz(v)                    uniq(v)-(v).begin()
#define mxIndx(v)                    mx(v)-(v).begin()
#define mnIndx(v)                    mn(v)-(v).begin()
#define max3(a, b, c)                max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c)                min(a, b) < min(b, c) ? min(a, b) : min(b, c)

#define lb(v,l)                      lower_bound(all(v),l)-(v).begin();
#define ub(v,l)                      upper_bound(all(v),l)-(v).begin();
#define Case                         cout<<"Case "<<++ii<<": "<<ans<<endl;
#define Ceil(a, b)                   (1LL*(a + b - 1) / (1LL*b))
#define unq_ele(v)                   v.resize(distance(v.begin(), uniq(v))) // for same valued consec. grp
#define upperChase(s)                transform(all(s), s.begin(), ::toupper)
#define lowerChase(s)                transform(all(s), s.begin(), ::tolower)

void solve()
{
    in(n);      //inp(v,n);

    // print(v);
    //OP(ans);
}
int main()
{
   FastIO;
   TC
   solve();
   //DT
}

