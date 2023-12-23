#include<bits/stdc++.h>
using namespace std;

int vis[100001];
vector<int>ar[100001];

void dfs(int node){
    vis[node]=1;
    for(auto child:ar[node]){
        if(!vis[child]){
            dfs(child);
        }
    }
}

int main(){
    int n,m,a,b;
    cin>>n>>m;
    for(int i=1; i<=n-1; i++)
        cin>>a>>b,ar[a].push_back(b),ar[b].push_back(a);
        int cnt=0;
        for(int i=1; i<=n-1; i++){
            if(!vis[i]){
                dfs(i),cnt++;
            }
        }
    if(cnt==1 && m==n-1){
        cout<<"YES\n";
    } else{
        cout<<"NO\n";
    }
}