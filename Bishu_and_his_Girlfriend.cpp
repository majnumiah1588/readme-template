#include<bits/stdc++.h>
using namespace std;

int mn=INT_MAX;
int vis[1001];
vector<int>ar[1001];
int dis[1001];

void dfs(int node, int d){
    vis[node]=1;
    dis[node]=d;
    for(auto child : ar[node]){
        if(vis[child]==0){
            dfs(child,dis[node]+1);
        }
    }
}

int main(){
    int n,a,b,q,ans=-1;
    cin>>n;
    for(int i=1; i<=n-1; i++)
    cin>>a>>b, ar[a].push_back(b),ar[b].push_back(a);
    dfs(1,0);
    cin>>q;
    while(q--){
        int idx;
        cin>>idx;
        if(dis[idx]<mn){
            mn=dis[idx],ans=idx;
        }
        else 
            if(dis[idx]==mn && idx<ans){
                ans=idx;
            }
    }
    cout<<ans;

}