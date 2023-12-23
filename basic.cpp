/**
 *   author: Md Majnu Miah
 *   created  : Dec  9 2023 14:48:11
**/

#pragma GCC optimize("O3")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize ("Ofast,no-stack-protector", "omit-frame-pointer", "inline", "-ffast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,sse4.2,fma,popcnt,abm,mmx,avx")

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
using uint = unsigned int;
using ulli = unsigned ll;

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

const ld  eps=1e-9;
const int mod=1e9+7;
#define inf             0x3f3f3f3f
#define PI              3.14159265358979323846
#define E               2.71828182845904523536
#define gamma           0.5772156649
#define stll     stack<ll>
#define qll      queue<ll>
#define pqll     priority_queue<ll>
#define umap     unordered_map
#define uset     unordered_set
#define PQ       priority_queue
#define printa(a,L,R)   for(int i=L;i<R;i++) cout<<a[i]<<(i==R-1?'\n':' ')
#define printv(a)       printa(a,0,a.size())
#define print2d(a,r,c)  for(int i=0;i<r;i++) for(int j=0;j<c;j++) cout<<a[i][j]<<(j==c-1?'\n':' ')
#define mem(a,x)        memset(a,x,sizeof(a))
#define SQ(x)           ((x)*(x))
#define issq(x)         (((ll)(sqrt((x))))*((ll)(sqrt((x))))==(x))
#define grtsrt(v)           sort(all(v),greater<int>())
#define countv(v,a)         count(v.begin(),v.end(),a)

#define sz(v)                        (ll)(v).size()
#define all(v)                       (v).begin(), (v).end()
#define rsort(v)                     sort(v.rbegin(),v.rend());
#define set_bit(x, idx)              x = x(1LL<<idx)
#define set_bits(x)                  __builtin_popcountll(x)
#define rev(s)                       reverse((s).begin(),(s).end())
#define des                          greater<int>()
#define spc                          <<" "<<
#define F                            first
#define S                            second
#define Y                            "YES\n"
#define N                            "NO\n"
#define nl                           "\n"
#define NL                           cc << nl;
#define cc                           cout
#define dbg(x)                       cerr<<"# Check value = "<<(x)<<nl;
#define Ins                          insert
#define pb                           push_back
#define eb                           emplace_back
#define yes                          cout << Y;
#define no                           cout << N;
#define OP(ans)                       cc<<ans<<nl;

#define fr(i,a,b)                    for(ll i=a; i<(ll)b; i++)
#define rf(i,a,b)                    for(ll i =a; i>=(ll)b; i--)
#define sf(x)                        ll x; scanf("%ld",&x);
#define pf(x)                        printf("%ld\n",x);
#define in(n)                        ll n; cin >> n;
#define in2(a,b)                     ll a,b; cin >> a >> b;
#define in3(a,b,c)                   ll a,b,c; cin >> a >> b >> c;
#define in4(a,b,c,d)                 ll a,b,c,d; cin >> a >> b >> c >> d;
#define ins(s)                       string s; cin >> s;
#define ins2(s,ss)                   string s,ss; cin >> s >> ss;
#define instr(s,n)                   vector<string>s(n); for(auto &u: s) cin >> u;
#define inp(v,n)                     vector<ll>v(n); for(auto &a: v) cin >> a;
#define print(v)                     for(auto a: v) cout << a<< " "; cout << endl;
#define mx(v)                        *max_element(all(v))
#define mn(v)                        *min_element(all(v))
#define uniq(v)                      unique(all(v))
#define uniqsz(v)                    uniq(v)-(v).begin()
#define mxIndx(v)                    mx(v)-(v).begin()
#define mnIndx(v)                    mn(v)-(v).begin()
#define max3(a, b, c)                max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c)                min(a, b) < min(b, c) ? min(a, b) : min(b, c)
#define TC                           in(tc); while(tc--)
#define DT                           cerr<<__DATE__<<" "<<__TIME__<<nl<<__FILE__<<nl;
#define FOR(v)                       for(auto u : (v))
#define lb(v,l)                      lower_bound(all(v),l)-(v).begin();
#define ub(v,l)                      upper_bound(all(v),l)-(v).begin();
#define Case                         cout<<"Case "<<++ii<<": "<<ans<<endl;
#define Ceil(a, b)                   ((a + b - 1) / (b))
#define OPvv(v)                      FOR(v) {FOR(u) cc << u << ' '<<nl;}
#define unq_ele(v)                   v.resize(distance(v.begin(), uniq(v))) // for same valued consec. grp
#define upperChase(s)                transform(all(s), s.begin(), ::toupper)
#define lowerChase(s)                transform(all(s), s.begin(), ::tolower)
#define FastIO                       ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
string  tostr(int n)        {stringstream rr;rr<<n;return rr.str();}
//ll qpow(ll n,ll k)          {ll ans=1;n%=mod;while(k){if(k&1) ans=(ans*n)%mod;n=(n*n)%mod;k>>=1;}return ans%mod;}

void solve()
{
    in(n);      //inp(v,n);

    
    // print(v);
    //OP(ans);
}
int32_t main()
{
   FastIO;
   TC
   solve();  
   //DT
}
