#include<bits/stdc++.h>
using namespace std;

int vis[100000],in[100000],out[100000];
vector<int>ar[100000];
int xx=1;
void dfs(int node){
    vis[node]=1;
    in[node]=xx++;
    for(int child : ar[node])
        if(vis[child]==0) dfs(child);
    out[node]=xx++;
}

int main(){
    int t; cin>>t; while(t--){
        int n,m,a,b;
    cin>>n>>m;
    while(m--){
        cin>>a>>b,ar[a].push_back(b),ar[b].push_back(a); 
    }
    dfs(1);
    //for(int i=1; i<=n; i++) cout<<i<<" intime "<<in[i]<<" outtime "<<out[i]<<endl;
    for(int i=1; i<=n; i++) cout<<in[i]<<" "<<out[i]<<endl;
    }
}