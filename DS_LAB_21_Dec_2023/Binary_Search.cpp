#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n; int arr[n]; for(int i=0; i<n; i++) cin>>arr[i];
    int mid,L=0,R=n-1; mid=(L+R)/2;
    int target; cin>>target;

    while(L<=R){
        mid=(L+R)/2;
        if(arr[mid]==target) {cout<<mid<<endl; return 0;}
        if(target>arr[mid]) R=mid+1;
        if(target<arr[mid]) L=mid-1;
    } cout<<"Not found!"<<endl;
}