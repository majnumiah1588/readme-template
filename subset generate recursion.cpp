#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

#define nl  "\n"
#define cc  cout
#define Ins insert
#define PB push_back
#define yes cout << "Yes\n";
#define no  cout << "No\n";

#define fr(i,a,b) for(int i=a; i<(int)b; i++)
#define rf(i,a,b) for(int i =a; i>=(int)b; i--)
#define rep(i,n) fr(i,0,n)
#define rep1(i,n) fr(i,1,n)
#define in(n) ll n; cin >> n;
#define ins(s) string s; cin >> s;
#define inp(arr,n) vector<int>arr(n); for(auto &a: arr) cin >> a;
#define print(arr)  for(auto a: arr) cout << a<< " "; cout << endl;
#define TC in(tc); while(tc--)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

vector<vector<int>>subsets;

void generate( vector<int> &subset, int i, vector<int> &nums){

if(i==nums.size()){
    subsets.PB(subset);
    return;
}
// ith element not in subset
generate(subset,i+1,nums);

//ith element in subset
subset.PB(nums[i]);
generate(subset,i+1,nums);
subset.pop_back();

}

int main(){

  in(n);
  inp(nums, n);
  //vector<int>nums(n);

  vector<int> empty;
  generate(empty,0,nums);
  for(auto subset : subsets){
    for(auto ele : subset){
        cc<<ele<<" ";
    }
    cc<<nl;
  }
return 0;
}
