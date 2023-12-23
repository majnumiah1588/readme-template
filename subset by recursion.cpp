#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;

#define nl  "\n"
#define cc  cout
#define PB push_back
#define PPB pop_back

#define in(n) ll n; cin >> n;
#define inp(arr,n) vector<int>arr(n); for(auto &a: arr) cin >> a;
#define TC in(tc); while(tc--)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

vvi subsets;

void generate( vi &subset, int i, vi &nums){

if(i==nums.size()){
    subsets.push_back(subset);
    return;
}
// ith element not in subset
generate(subset,i+1,nums);

//ith element in subset
subset.push_back(nums[i]);
generate(subset,i+1,nums);
subset.pop_back();
}

int main(){

  in(n);
  inp(nums,n);
  vi empty;
  generate(empty,0,nums);
  for(auto subset : subsets){
    for(auto element : subset){
        cc<<element<<" ";
    }
    cc<<nl;
  }
return 0;
}
