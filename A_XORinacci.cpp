/***************************************
 *   author: MD. MAJNU MIAH            *
 *   created  : Oct 6 2023 3:57:43    *
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

#define nl                           "\n"
#define NL                           cc << nl;
#define cc                           cout

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

void solve()
{
    in3(a,b,n);
    cc << ((n%3==0)? a:((n%3==1)?b:a^b)) << nl;
}
int main()
{
   FastIO;
   TC
   solve();
}
