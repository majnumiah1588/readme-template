#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,ans=0; cin>>a>>b>>c;
    ans=2*(min(a,b)+c); if(a!=b) ans++;
    cout<<ans<<endl;
}