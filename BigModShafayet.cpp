#include<bits/stdc++.h>
using namespace std;
#define M 10000

int Bigmod(int N, int P){
	if(P==0) return 1;
	if(P%2==0){
    int ret=Bigmod(N,P/2);
      return ((ret%M)*(ret%M))%M;
      }
	else return ((N%M)*(Bigmod(N,P-1)%M))%M;
}
int main()
{
  int n,p;
  cin>>n>>p;
  cout<<Bigmod(n,p)<<'\n';
}
