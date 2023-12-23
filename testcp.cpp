/**
 *    author: Md Majnu Miah
 *    created  : Aug 21 2023 16:48:18
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
#define Ins insert
#define PB push_back
#define MP make_pair
#define eb emplace_back
#define yes cout << "Yes\n";
#define no  cout << "No\n";
#define solved cc<<ans<<nl;

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
#define TC in(tc); while(tc--)
#define cx cerr << "\n" << 10 * (double)clock() / CLOCKS_PER_SEC * 1000 << " ms";
#define time cerr << "\ncreated  : " << __DATE__<<" "<<__TIME__<< endl;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll gcd(ll a,ll b) {return __gcd(a,b); }
ll lcm(ll a,ll b) { return a*(b/gcd(a,b)); }

 //ll freq[200005];

void solve()
{

    ll i,j,ans=1,cnt=0,MX=1;
    ll n,x; cin>>n>>x;
    ll freq[n];
    for(i=0;i<n;i++) freq[i]=0;
    ll a[n];
    for(i=0;i<n;i++) { cin>>a[i]; freq[a[i]]++; }
    sort(a, a+n);
    //fr(i,0,n) {  ans=max(ans,freq[a[i]]); }
    fr(i,0,n-1)
    {
        if(a[i]==a[i+1])
        {
         ans++;   MX=max(ans,MX);

        }
        else{
            ans=1;   MX=max(ans,MX);
        }


    }
        //print(arr);
       cc<<MX<<nl;

        //solved

}
int main()
{
    fast

    // TC
       {
        solve();
       }

  cx time
}
