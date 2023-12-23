/***************************************
 *   author: MD. MAJNU MIAH            *
 *   created  : Oct 5 2023 22:57:43    *
****************************************/

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

#define N 3
ll I[N][N],B[N][N];

void mul(ll A[][N],ll B[][N],ll dim)
{
    ll res[dim+1][dim+1];
    for(ll i=0;i<dim;i++)
    {
        for(ll j=0;j<dim;j++)
        {
            res[i][j]=0;
            for(ll k=0;k<dim;k++)
            {
                ll x=(A[i][k]*B[k][j]);
                res[i][j]=(res[i][j]+x);
            }
        }
    }
    for(ll i=0;i<2;i++)
    {
        for(ll j=0;j<2;j++)A[i][j]=res[i][j];
    }
}
void solve(ll a,ll b,ll n)
{
    I[0][0]=I[1][1]=1;  I[0][1]=I[1][0]=0;
    B[0][0]=0;    B[0][1]=B[1][0]=B[1][1]=1;
    n--;
    while(n)
    {
        if(n%2==1) { mul(I,B,2);   n--;}
        else  { mul(B,B,2);    n/=2;}
    }
    ll ans=a*I[0][1]+b*I[1][1];
    cout<<ans<<nl;
}
int main()
{
     FastIO
     TC
        {
        ll a,b,n;
        cin>>a>>b>>n;
        solve(a,b,n);
        }
}

