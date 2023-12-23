#include<bits/stdc++.h>
using namespace std;
int backtrack(int n ,int sum){
    if(n==0) return 1;
    backtrack(n-1,sum+n);
return sum;
}
int main(){
    int n; cin>>n;
    int sum=1;
    sum=backtrack(n,sum);
    cout<<sum<<endl;

}