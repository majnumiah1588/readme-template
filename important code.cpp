/**
 *    author: Md Majnu Miah
 *    created: 17.08.2023 8:26:00 pm
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
typedef set<int, int> sii;
typedef set<ll, ll> sll;
typedef map<int,int> mp;
typedef vector<pll> vpll;
typedef vector<pii> vpii;

const ll INF = 2e18;
const ll vz = 2e5+1;
const ll mn = INT_MAX;
const ll mod = 1e9 + 7;
const ld PI = acos((ld)-1);

#define sz(arr) (int)(arr).size()
#define set_bit(x, idx) x = x(1LL<<idx)
#define set_bits(x) __builtin_popcountll(x)
#define all(arr) (arr).begin(), (arr).end()
#define rall(arr) (arr).rbegin(), (arr).rend()
#define rev(s) reverse((s).begin(),(s).end())
#define mem(arr,value) memset(arr,value,sz(arr))
#define dcsort(s) sort((s).begin(),(s).end(),greater<ll>())
#define tolower(s) trsnsform((s).begin(),(s).end(),::tolower)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define charErase(s) (s).erase(remove((s).begin(),(s).end(),(ch)),(s).end())

#define F  First
#define S Second
#define nl  "\n"
#define cc  cout
#define rsz resize
#define pb insert
#define ft front()
#define bk back()
#define PB push_back
#define MP make_pair
#define eb emplace_back
#define yes cout << "Yes\n";
#define no  cout << "No\n";
#define solved cc<<ans<<nl;
#define ln __LINE__

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
#define uniq(arr) unique((arr).begin(),(arr).end())
#define uniqsz(arr) uniq(arr)-(arr).begin()
#define mxIndx(arr) mx(arr)-(arr).begin()
#define mnIndx(arr) mn(arr)-(arr).begin()
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu () {            cerr << endl;}
template < typename T, typename ... hello>void faltu( T arg, const hello &... rest) {cerr << arg << ' ';faltu(rest...);}

 /*
 // Euclid Algorithm
  ll gcd(ll a, ll b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


 // combination of string
    string s = "abc";
    sort(s.begin(), s.end());
    do {
        cout << s << "\n";
       } while (next_permutation((s).begin(), (s).end()));
 //         /

 // Binary Exponentiation           //  O(log(n)).
 // ans = pow (2,1000000000) can be counted by using this.
  ll power( ll base, ll pow, ll mod ){
  ll res = 1 ;  while(pow>0) {
   if(n%2==0) { res = (res * base) % mod ; pow--; }
    else { base = (base * base) % mod ;   n = n >> 1 ; }
   }
   return res ;
  }

 // Factorial number
 int fact(int n) {
   if (n == 0 | n == 1)
   return 1;
   else
   return n * fact(n - 1);
 }

 //
 ll Bigmod(ll N, ll P){      // Shafayet
	if(P==0) return 1;
	if(P%2==0){
    ll ret=Bigmod(N,P/2);   return ((ret%M)*(ret%M))%M; }
	else return ((N%M)*(Bigmod(N,P-1)%M))%M;
 }
 // Harmonic Series :
 * Time Complexity O(nln(n))  // divisor = floor(n/k) = 10/2 = 5 = {2,4,6,8,10};
    ll mx = 1e7 ;   ll cnt[mx] ;    vector<ll> divisors[mx] ;
    for ( int i = 1; i <= lim; i++ ) {
        for ( int j = i; j <= lim; j += i ) {
            cnt[j]++;
            // divisors[j].push_back(i); // divisors[4]={1,2,4};
            // SumOfDivisors[j] + = i ;
        }
    }

 */
ll gcd(ll a,ll b) {return __gcd(a,b); }
ll lcm(ll a,ll b) { return a*(b/gcd(a,b)); }

void solve()
{

    ll i,j,ans=0,cnt=0;
    in(n);

    //inp(arr,n);


      //print(arr);

        //solved

}
int main()
{
    fast
    in(tc); while(tc--)
    {
        solve();

       // comb = fact(n) / (fact(r) * fact(n-r));
        //per = fact(n) / fact(n-r);
    }

   cerr << "\n" << 10 * (double)clock() / CLOCKS_PER_SEC * 1000 << " ms";
   cerr << "\ncreated : " << __DATE__<<" "<<__TIME__<< endl;
}
 /* ***********************************************
 Reminder :

 * ll can store upto (20!). It overflows at (21!).
 * to avoid overflow multiply by ( 1LL* )

 ***************************************************/

