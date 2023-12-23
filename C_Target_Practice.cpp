/**
 *   author: MD. MAJNU MIAH
 *   created  : Sep 19 2023 00:30:43
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

#define sz(arr)                     (int)(arr).size()
#define mem(arr,value)               memset(arr,value,sz(arr))
#define all(arr)                    (arr).begin(), (arr).end()
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
#define sf(n)                        scanf("%lld",&n);
#define in(n)                        ll n; cin >> n;
#define pf(ans)                        printf("%lld",ans);
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
#define Case                         cout<<"Case "<<++ii<<": "<<ans<<endl;
#define FastIO                       ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve()
{
int n=10,ans=0;
char grid[n][n];
fr(i,0,n)
   fr(j,0,n)
        cin>>grid[i][j];

fr(i,0,n){
    fr(j,0,n){
        if( ( i==0 || i==9 || j==0 || j==9) && grid[i][j]=='X') { ans+=1; grid[i][j]='.'; }
        if( ( i==1 || i==8 || j==1 || j==8) && grid[i][j]=='X') { ans+=2; grid[i][j]='.'; }
        if( ( i==2 || i==7 || j==2 || j==7) && grid[i][j]=='X') { ans+=3; grid[i][j]='.'; }
        if( ( i==3 || i==6 || j==3 || j==6) && grid[i][j]=='X') { ans+=4; grid[i][j]='.'; }
        if( ( i==4 || i==5 || j==4 || j==5) && grid[i][j]=='X') { ans+=5; grid[i][j]='.'; }
    }
}
        cc<<ans<<nl;
}
int main()
{
   FastIO;
   TC
     solve(); //  DT
}
