#include<bits/stdc++.h>
using namespace std;

int vis[2001],col[2001];
vector<int>ar[2001];

bool dfs(int v,int c){
    vis[v]=1;
    col[v]=c;
    for(int child: ar[v]){
            if(vis[child]==0 && dfs(child,c^1)==false)
                    return false;
            else
                if(col[v]==col[child])
                    return false;   
        }
    return true;
}

int main(){
    int t,n,m,a,b;  
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        cin>>n>>m;
        for(int i=1; i<=n; i++) ar[i].clear(),vis[i]=0;
        for(int i=1; i<=m; i++)
            cin>>a>>b,ar[a].push_back(b),ar[b].push_back(a);
        bool flag=true;

        for(int i=1; i<=n; i++)
            if(vis[i]==0){
                if(dfs(i,0)==false) flag=false;
             }    
        cout<<"Scenario #"<<tc<<":\n";
        if(flag==1)
            cout<<"No suspicious bugs found!\n";
        else
             cout<<"Suspicious bugs found!\n";
    }
    return 0;
}