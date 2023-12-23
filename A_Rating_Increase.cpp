#include<bits/stdc++.h>
 using namespace std;
 
#define FastIO         ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve()
{
    string s; cin>>s;

    int n=s.size();
    bool f=true;
    string s1,s2; s1=s[0];
    for(int i=1; i<n; i++){
            if(s[i]=='0' && f==true) s1+=s[i];
        else {
            s2+=s[i];
            f=false;
        }
    } 
    // cout<<s1<<" "<<s2<<"\n";
    // s1=""; s2="";
    string a,b; a=s1; b=s2;

    int x1,x2;
    // check if the strings are empty before calling stoi
    if (a.empty() || b.empty()) {
        cout << "-1\n";
        return;
    }
    // or use a try-catch block to handle the exception
    try {
        x1 = (int)stoi(a); 
        x2 = (int)stoi(b);
    }
    catch (invalid_argument& e) {
        cout << "-1\n";
        return;
    }
    if(a==b || x1>=x2 ) {cout<<"-1\n"; }
     else cout<<a<<" "<<b<<"\n";
     s1=""; s2="";
}
int main()
{
   FastIO;
   int t; cin>>t; while(t--){
    solve();
   } 
   return 0;
}
