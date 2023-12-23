#include<bits/stdc++.h>
using namespace std;

 int missingNumber(vector<int>& array, int n) {
       int sum=(n*(n+1))/2;
       for(int i=0; i<n-1; i++){
           sum-=array[i];
       }
       return sum; 
    }

int main(){
    int n; cin>>n;
    vector<int>ar(n-1);
    for(int i=0; i<n-1; i++){
        cin>>ar[i];
    }
    cout<<missingNumber(ar,n)<<endl;
}