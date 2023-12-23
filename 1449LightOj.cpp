/**
 *   author: MD. MAJNU MIAH
 *   created  : Sep  6 2023 12:18:59
**/

#pragma GCC optimize("O3")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize ("Ofast,no-stack-protector", "omit-frame-pointer", "inline", "-ffast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,sse4.2,fma,popcnt,abm,mmx,avx")

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

typedef set<int> si;
typedef set<ll> sl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<int, int> vii;
typedef vector<ll, ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef map<int,int> mp;
typedef map<ll,ll> MP;
typedef vector<pll> vpll;
typedef vector<pii> vpii;

const ll INF = 2e18;
const ll vz = 2e5+1;
const ll mn = INT_MAX;
const ll Mod = 1e9;
const ld PI = acos((ld)-1);

#define sz(arr) (int)(arr).size()
#define mem(arr,value) memset(arr,value,sz(arr))
#define all(arr) (arr).begin(), (arr).end()
#define tolower(s) trsnsform(all(s),::tolower)
#define set_bit(x, idx) x = x(1LL<<idx)
#define set_bits(x) __builtin_popcountll(x)
#define rev(s) reverse((s).begin(),(s).end())
#define F  First
#define S Second
#define nl  "\n"
#define cc  cout
#define ckv(x) cerr<<"# Check value = "<<(x)<<nl;
#define Ins insert
#define PB push_back
#define MP make_pair
#define eb emplace_back
#define NL cc << nl;
#define yes cout << "Yes\n";
#define no  cout << "No\n";
#define solved cc<<<<ans<<nl;

#define fr(i,a,b) for(int i=a; i<(int)b; i++)
#define rf(i,a,b) for(int i =a; i>=(int)b; i--)
#define rep(i,n) fr(i,0,n)
#define rep1(i,n) fr(i,1,n)
#define in(n) ll n; cin >> n;
#define ins(s) string s; cin >> s;
#define inp(arr,n) vector<int>arr(n); for(auto &a: arr) cin >> a;
#define print(arr)  for(auto a: arr) cout << a<< " "; cout << endl;
#define mx(arr) *max_element(all(arr))
#define mn(arr) *min_element(all(arr))
#define uniq(arr) unique(all(arr))
#define uniqsz(arr) uniq(arr)-(arr).begin()
#define mxIndx(arr) mx(arr)-(arr).begin()
#define mnIndx(arr) mn(arr)-(arr).begin()
#define max3(a, b, c) max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c) min(a, b) < min(b, c) ? min(a, b) : min(b, c)
#define TC in(tc); while(tc--)
#define Case  cout<<"Case "<<++(static int w)<<": "<<ans<<endl;
#define time "Time = "<<fixed<<setprecision(10)<<(end_time - start_time) / CLOCKS_PER_SEC<<" ms"<<nl
#define created cerr <<time<< "created  : " <<__FILE__<<nl<< __DATE__<<" "<<__TIME__<< endl;
#define StartClk   double start_time = clock();
#define EndClk     double end_time = clock();
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll gcd(ll a,ll b) {return __gcd(a,b); }
ll lcm(ll a,ll b) { return a*(b/gcd(a,b)); }

void solve()
{

   int i=0, j, cnt=0 ;
    w=0;
    ins(ans) ;
 // inp(v,n) ;
    if(ans[4]!='s') ans[4]='s';

    //print(v) ;
     //ckv(ans)

    Case
     // solved

}
int main()
{
   fast;
   StartClk
    TC
       {
        solve();
       }
       EndClk

   created;
}
