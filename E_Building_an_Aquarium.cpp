/**
 *   author: MD. MAJNU MIAH
 *   created  : Sep 25 2023 12:37:43
**/

#pragma GCC optimize("O3")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize ("Ofast,no-stack-protector", "omit-frame-pointer", "inline", "-ffast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,sse4.2,fma,popcnt,abm,mmx,avx")

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
const ll INF = 2e18;
const ll vz = 2e5+1;
const ll mn = INT_MAX;
const ll Mod = 1e9;
const ld PI = acos((ld)-1);

typedef set<int>                    si    ;
typedef set<ll>                     sl    ;
typedef vector<int>                 vi    ;
typedef vector<ll>                  vl    ;
typedef vector<int, int>            vii   ;
typedef vector<ll, ll>              vll   ;
typedef pair<int, int>              pii   ;
typedef pair<ll, ll>                pll   ;
typedef map<int,int>                mp    ;
typedef map<ll,ll>                  MP    ;
typedef vector<pll>                 vpll  ;
typedef vector<pii>                 vpii  ;

#define sz(v)                       (int)(v).size()
#define all(v)                      (v).begin(), (v).end()
#define tolower(s)                   trsnsform(all(s),::tolower)
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
#define solved                       cc<<ans<<nl;

#define fr(i,a,b)                    for(int i=a; i<(int)b; i++)
#define rf(i,a,b)                    for(int i =a; i>=(int)b; i--)
#define sf(x)                        ll x; scanf("%ld",&x);
#define pf(x)                        printf("%ld\n",x);
#define in(n)                        ll n; cin >> n;
#define ins(s)                       string s; cin >> s;
#define instr(s,n)                   vector<string>s(n); for(auto &u: s) cin >> u;
#define inp(arr,n)                   vector<int>arr(n); for(auto &a: arr) cin >> a;
#define print(arr)                   for(auto a: arr) cout << a<< " "; cout << endl;
#define mx(arr)                      *max_element(all(arr))
#define mn(arr)                      *min_element(all(arr))
#define uniq(arr)                    unique(all(arr))
#define uniqsz(arr)                  uniq(arr)-(arr).begin()
#define mxIndx(arr)                  mx(arr)-(arr).begin()
#define mnIndx(arr)                  mn(arr)-(arr).begin()
#define max3(a, b, c)                max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c)                min(a, b) < min(b, c) ? min(a, b) : min(b, c)
#define TC                           in(tc); while(tc--)
#define DT                           cerr<<__DATE__<<" "<<__TIME__<<nl<<__FILE__<<nl;
#define FOR(v)                       for(auto u : (v))
#define lb(v,l)                      lower_bound(all(v),l)-(v).begin();
#define ub(v,l)                      upper_bound(all(v),l)-(v).begin();
#define Case                         cout<<"Case "<<++ii<<": "<<ans<<endl;
#define FastIO                       ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve()
{
    ll ans=0,i,j,k,cnt=0;
    in(n);
    in(x);
    inp(v,n);
    sort(v.begin(),v.end()); ll ss=v[0]+x;
    ll l=1,h=0,pfq=0,lf=0,rt=0,fq=0,c1=0;
     ll mxv=max(ss,x+1);
     if(n==1) {cc<<mxv<<nl; return ;}
    fr(i,0,n){
         lf=lb(v,v[i]);  rt=ub(v,v[i]);  fq=rt-lf;
        h+=fq+l; l++; if(h>x) {cc<<l<<nl; return ;}
    }
    fr(i,0,n) {if(v[i]==1) c1++; } if(c1==n) { cc<<x+1<<nl; return ; }
    ll rs=(x-h)/n+l; cc<<rs+2<<nl;
}
int main()
{
   FastIO;
   TC
     solve();
}
