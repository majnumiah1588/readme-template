#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef set<int>                    si    ;
typedef set<ll>                     sl    ;
typedef vector<int>                 vi    ;
typedef vector<ll>                  vl    ;

#define sz(arr)                     (int)(arr).size()
#define mem(arr,value)               memset(arr,value,sz(arr))
#define all(arr)                    (arr).begin(), (arr).end()
#define nl                           "\n"
#define NL                           cc << nl;
#define cc                           cout
#define ckv(x)                       cerr<<"# Check value = "<<(x)<<nl;
#define Ins                          insert
#define pb                           push_back
#define eb                           emplace_back
#define solved                       cc<<ans<<nl;

#define fr(i,a,b)                    for(int i=a; i<=(int)b; i++)
#define rf(i,a,b)                    for(int i =a; i>=(int)b; i--)
#define in(n)                        ll n; cin >> n;
#define ins(s)                       string s; cin >> s;
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
#define Case                         cout<<"Case "<<++ii<<": "<<ans<<endl;
#define FastIO                       ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

vector<ll>v;
vector<ll>ans;
void seive(int n)
{
    ll i,j,a[200002];
    memset(a,0,sizeof(a));
    for(i=2;i*i<=n;i++)
    {
        if(a[i]==0)
        {
            for(j=i*i;j<=n;j+=i)
            {
               a[j]=1;
            }
        }
    }
    for(i=2;i<=n;i++)
    {
        if(a[i]==0) v.push_back(i);
    }
    sort(all(v));
    int p=sz(v);
    for(i=0; i<p; i++){
    for(j=i; j<p; j++ ){
        ans.pb(v[i]*v[j]);
       }
    }
}
int main()
{
   FastIO;

   // TC
   ll n=200002;
       {
        seive(n);
       }
       TC
       {
           in(k);
           cc<<ans[k]<<nl;
       }

   cerr<<nl<<__DATE__<<" "<<__TIME__<<nl<<__FILE__<<nl;
}
