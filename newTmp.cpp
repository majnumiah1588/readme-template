#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ll       long long
#define ull      unsigned long long
#define ld       long double
#define pii      pair<int,int>
#define pll      pair<ll,ll>
#define vi       vector<int>
#define vll      vector<ll>
#define vc       vector<char>
#define vs       vector<string>
#define vpii     vector< pair<int,int> >
#define vpll     vector< pair<ll,ll> >
#define ppll     pair< ll,pll >
#define pllp     pair< pll,ll >
#define stll     stack<ll>
#define qll      queue<ll>
#define pqll     priority_queue<ll>
#define umap     unordered_map
#define uset     unordered_set
#define PQ       priority_queue

#define rep(i,n)        for(i=0;i<n;i++)
#define itfor(i, c)     for (typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)



#define pb              push_back
#define MP              make_pair
#define UB              upper_bound
#define LB              lower_bound

#define F               first
#define S               second

#define nl              "\n"
#define lg(r,n)         (int)(log2(n)/log2(r))
#define sf(a)           scanf("%d",&a)
#define sfl(a)          scanf("%I64d",&a)
#define sfc(a)          scanf("%c",&a)
#define sff(a,b)        scanf("%d %d",&a,&b)
#define sffl(a,b)       scanf("%I64d %I64d",&a,&b)
#define sfff(a,b,c)     scanf("%d %d %d",&a,&b,&c)
#define sfffl(a,b,c)    scanf("%I64d %I64d %I64d",&a,&b,&c)
#define pf              printf
#define pfi(a)          pf("%d\n",&a)
#define pfl(a)          pf("%I64d\n",&a)
#define _ccase          printf("Case %d: ",++cs)
#define _case           cout<<"Case "<<++cs<<": "
#define debug(x)        cout<<#x"="<<(x)<<nl

#define rev(v)              reverse(v.begin(),v.end())
#define srt(v)              sort(v.begin(),v.end())
#define all(v)              v.begin(),v.end()
#define mnv(v)              *min_element(v.begin(),v.end())
#define mxv(v)              *max_element(v.begin(),v.end())
#define toint(a)            atoi(a.c_str())
#define midlr               mid=b+((e-b)>>1),l=n<<1,r=n<<11
#define fast                ios_base::sync_with_stdio(false),cin.tie(NULL)
template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const ld  eps=1e-9;
const int mod=1e9+7;
string  tostr(int n)        {stringstream rr;rr<<n;return rr.str();}
//ll qpow(ll n,ll k)          {ll ans=1;n%=mod;while(k){if(k&1) ans=(ans*n)%mod;n=(n*n)%mod;k>>=1;}return ans%mod;}
const int mxn=1e5+9;
string ss[7]={"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
vs v;
int main()
{
    fast;
    ll i,j,k,n,m,d;
    string s,t;
    k=10;
    while(k--){
        for(i=0;i<7;i++) v.pb(ss[i]);
    }
    cin>>s>>t;
    ll a[3]={28,30,31};
    for(i=0;i<3;i++){
        d=a[i];
        for(j=0;j<7;j++){
            if(ss[j]==s){
                if(v[j+d]==t) return cout<<"YES\n",0;
            }
        }
    }
    cout<<"NO\n";
    return 0;
}

