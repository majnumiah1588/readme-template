#include<bits/stdc++.h>
using namespace std;

set<int>s;

void PrimeFactorization(int x){
    int k=x;
    for(int i=2; i<=k; i++){
        while(x%i==0) s.insert(i),x/=i;
    } if(x!=1) s.insert(x);
    cout<<k<<" : "<<s.size()<<"\n";
    s.clear();
}

int main(){
    while(1){
        int x;
        cin>>x;
        if(x==0) break;
        PrimeFactorization(x);
       
    }
}