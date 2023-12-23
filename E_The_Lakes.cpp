#include <bits/stdc++.h>
using namespace std;
const int  N  = (int) 1e7+5;
#define ll  long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);



// 4-direction moves
int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, -1, 1, 0};
string dc="DLRU";
////////////////////


vector<int> a[1111];
bool visited[1111][1111];

bool isValid(int x,int y,int n,int m){
   return (x>-1 and x<n and y>-1 and y<m and !visited[x][y] and a[x][y]!=0);
}

ll DFS(int x,int y,int n,int m){
   ll res=a[x][y];
   visited[x][y]=true;
   for(int i=0;i<4;i++){
      int tx=x+dx[i];
      int ty=y+dy[i];
      if(isValid(tx,ty,n,m)){
         res+=DFS(tx,ty,n,m);
      }
   }
   return res;
}

int main(){
   Faster;
   int t;                     cin>>t;
   while(t--){
      int n,m;                cin>>n>>m;
      for(int i=0;i<n;i++){
         a[i].assign(m,0);
         for(int j=0;j<m;j++){
            cin>>a[i][j];
            visited[i][j]=false;
         }
      }

      ll ans=0;

      for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
            if(visited[i][j] or a[i][j]==0)continue;
            ans=max(ans,DFS(i,j,n,m));
         }
      }

      cout<<ans<<endl;

   }



   return 0;
}