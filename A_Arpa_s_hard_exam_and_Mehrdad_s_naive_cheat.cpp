#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll M=10;
 ll Bigmod(ll N, ll P){      
	if(P==0) return 1;
	if(P%2==0){
        ll ret=Bigmod(N,P/2);   
        return ((ret%M)*(ret%M))%M; 
    }
	else return ((N%M)*(Bigmod(N,P-1)%M))%M;
 }

int main(){
    ll p;  cin>>p;
    ll b=1378;
    cout<<Bigmod(b,p)%10<<endl;
    return 0;
}