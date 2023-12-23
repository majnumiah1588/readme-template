#include<bits/stdc++.h>
using  namespace  std;

typedef long long ll;
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
#define rev(s)                       reverse((s).begin(),(s).end())
#define cc                           cout
#define nl                           "\n"
#define F                            first
#define S                            second
#define Y                            "YES\n"
#define N                            "NO\n"
#define in(n)                        ll n; cin >> n;
#define inp(v,n)                     vector<ll>v(n); for(auto &a: v) cin >> a;
#define OP(ans)                      cc<<ans<<nl;
#define dbg(x)                       cerr<<"#dbg = "<<(x)<<nl;
#define NL                           cc << nl;
#define FOR(v)                       for(auto u : (v))
#define print(v)                     for(auto a: v) cout << a<< " "; cout << endl;
#define OP2D(v)                      FOR(v) {FOR(u) cc << u << ' '<<nl;}
#define fr(i,a,b)                    for(ll i=a; i<(ll)b; i++)
#define rf(i,a,b)                    for(ll i =a; i>=(ll)b; i--)
#define ins                          insert
#define pb                           push_back
#define TC                           in(tc); while(tc--)
#define DT                           cerr<<__DATE__<<" "<<__TIME__<<nl<<__FILE__<<nl;
#define FastIO                       ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
 ll n,q;
        cin>>n>>q;
        ll ar[n+3];
        for(ll i=1;i<=n;i++)cin>>ar[i];
        ll pre_sum[n+2];
        ll pos_sum[n+3];

        pre_sum[0]=0;
        for(ll i=1;i<=n;i++)pre_sum[i]=(pre_sum[i-1]+ar[i]);

        pos_sum[n+1]=0;
        for(ll i=n;i>=1;i--)
        {
            pos_sum[i]=(pos_sum[i+1]+ar[i]);
        }
        while(q--)
        {
            ll l,r;
            cin>>l>>r;
            // for(ll i=1; i<=n; i++) cout<<pre_sum[i]<<" "; cout<<endl;
            // for(ll i=1; i<=n; i++) cout<<pos_sum[i]<<" "; cout<<endl;
            ll ans=(pre_sum[n]-pre_sum[l-1]-pos_sum[r+1]);
            cout<<ans<<endl;
        }
}

int main(){
   FastIO
   solve(); 
   DT   
 }
