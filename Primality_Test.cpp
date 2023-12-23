#include<bits/stdc++.h>
using  namespace  std;
#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl      '\n'
typedef long long int ll;

// PRIME NUMBER TEST//
bool prime(int n)
{
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}

int main()
{
    int n,t;
    cin>>t;
     while(t--){
        cin>>n;
        if(prime(n)==true)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
     }
}
