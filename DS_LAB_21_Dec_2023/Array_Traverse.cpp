#include<bits/stdc++.h>
using namespace std;

int main(){
    // a)  	Maximum Value b) Minimum Value c) Average Value d) Total Value e) Sin Value 

    int arr[]={1,2,3,4,5,100};
    int max_value=0,min_value=INT_MAX;
    double avg_value=0,total_value=0,sin_value=0.0;
    int arr_size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<arr_size; i++){
        if(arr[i]>max_value){
            max_value=arr[i];
        }
        if(arr[i]<min_value){
            min_value=arr[i];
        }
    total_value+=arr[i];
    }
    cout<<"Maximum value = "<<max_value<<endl;
    cout<<"Minimum value = "<<min_value<<endl;
    cout<<"Average value = "<<total_value/(arr_size*1.0)<<endl;
    //for(int i=0; i<arr_size; i++)  cout<<"sin value of arr["<<i<<"] = "<<sin(arr[i]*(180.0/(M_PI)))<<endl;

/*2. Inserting: Insert
a) 54 to a sorted array. b) Rahim to a sorted array. 
c) 99 to position 5. d) Karim to position 5.  */
// Insert 54 into a sorted array

int newValue=54,pos;
for(int i=0; i<arr_size; i++){
    if(arr[i]>newValue) pos=i; break;
}
for(int i=arr_size; i>pos; i--) arr[i]=arr[i-1];
arr[pos]=newValue;
arr_size++;
for(int i=0; i<arr_size; i++) cout<<arr[i]<<" "; cout<<"# "<<arr[0]<<endl;

}