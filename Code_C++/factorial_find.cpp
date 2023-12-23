#include<bits/stdc++.h>
using namespace std;

int dp[1000];

int fact(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=(fact(n-1)+fact(n-2));
}

int main(){
    int n;
    memset(dp,-1,sizeof(dp));
    cin>>n;
    
    cout<<fact(n)<<endl;
}