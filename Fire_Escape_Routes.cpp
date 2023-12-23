#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

vector<ll>ar[100001];
ll vis[100001];
ll cc_size;

void dfs(ll node){
    vis[node]=1; cc_size++;
    for(ll child : ar[node])
    if(vis[child]==0)
    dfs(child);
}

 int main(){
   ll t;  cin>>t;  
   while(t--){
    ll n,m,a,b;  cin>>n>>m; 
    for(ll i=1; i<=n; i++) ar[i].clear(),vis[i]=0;  
    for(ll i=1; i<=m; i++)
    cin>>a>>b, ar[a].push_back(b), ar[b].push_back(a);
    
    ll cc=0,ans=1;
    for(ll i=1; i<=n; i++)
        if(vis[i]==0){
        cc_size=0; dfs(i),cc++;
        ans=(ans*cc_size)%mod;
        }
    cout<<cc<<" "<<ans<<endl;
   }
return 0;
}