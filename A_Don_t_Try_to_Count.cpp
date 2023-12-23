#include <bits/stdc++.h>
using namespace std;
bool isSubString(string x, string s){
    if(x.find(s)!=string::npos) return true;
    return false;
}
void solve(){
     int n,m,ans=1;
        string x,s;
        cin>>n>>m>>x>>s;
        if(isSubString(x,s)) {cout<<0<<endl; return 0;}
        for(int i=0; i<6; i++)
        {  x+=x;
            if(isSubString(x,s)) { cout<<ans<<endl; return 0;}
            ans++;
        }
         cout<<"-1"<<endl;
}
int main() 
{
    int t; cin>>t;
    while(t--)
    {
       solve();
    }
}