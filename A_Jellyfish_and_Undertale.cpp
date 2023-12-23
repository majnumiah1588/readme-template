
/**
 *   author: MD. MAJNU MIAH
 *   created  : Sep 30 2023 21:15:43
**/

#pragma GCC optimize("O3")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize ("Ofast,no-stack-protector", "omit-frame-pointer", "inline", "-ffast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,sse4.2,fma,popcnt,abm,mmx,avx")

#define _USE_MATH_DEFINES // Define mathematical constants and functions
#include<bits/stdc++.h>
#include <cmath>
/*  double area = M_PI * pow(radius, 2); // Using M_PI from <cmath>
    double angle = M_PI / 4.0;
    double sineValue = sin(angle); // Using sin() from <cmath>
*/
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
#define ckv(x)                       cerr<<"# Check value = "<<(x)<<nl;
#define Ins                          insert
#define pb                           push_back
#define eb                           emplace_back
#define yes                          cout << "Yes\n";
#define no                           cout << "No\n";
#define OP(ans)                       cc<<ans<<nl;
#define ijw                          ll i,j,w=0;

#define fr(i,a,b)                    for(ll i=a; i<(ll)b; i++)
#define rf(i,a,b)                    for(ll i =a; i>=(ll)b; i--)
#define sf(x)                        ll x; scanf("%ld",&x);
#define pf(x)                        printf("%ld\n",x);
#define in(n)                        ll n; cin >> n;
#define in2(a,b)                     ll a,b; cin >> a >> b;
#define in3(a,b,c)                   ll a,b,c; cin >> a >> b >> c;
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

auto pow2(uint x){return (1u) << x;}  /* returning unsigned */
auto pow2(ulli x){return (1ull) << x;}  // x <= 63
ll binpow(ll a, ll b){ll ans = 1ll; while(b > 0){if(b & 1) ans *= a; a *= a; b >>= 1;} return ans;}
ll Binexp(ll a, ll b, ll m){a %= m; ll ans = 1ll; while(b > 0){if(b & 1) ans = ans * a % m; a = a * a % m; b >>= 1;} return ans;}
ll nCr(ll n, ll r){ll x = 1ll, y = 1ll;if(n - r < r) r = n - r; while(r){x *= n;y *= r;
ll cm = __gcd(x, y);x /= cm;y /= cm;--n;--r;}return x;}
ll nPr(ll n, ll r){ll x = 1ll;while(r){x *= n; --n;--r;}return x;}

void solve()
{
    in(a); in(b);  in(n);  inp(v,n); sort(all(v));  ll c=0,l=0,k=1;
    k+=b-1; c=1; fr(i,0,n){
        c=min(c+v[i],a); k+=(c-1); c=1;
    }
    OP(k);
}
int main()
{
   FastIO;
   TC
   solve(); 
}
