#include<bits/stdc++.h>
using namespace std;

vector<int> subset(3);
vector<vector<int>>current;

void generateSubset(vector<int> &s,int i){
    if(i == s.size()) {
        subset.push_back(current[i]);
        return;
    }

    //take
    current[i].push_back(s[i]);
    generateSubset(s,i+1);
    current[i].pop_back();

    //not take
    generateSubset(s,i+1);
}

int main(){
    vector<int> s={1,2,3} ;
    generateSubset(s,0);
    for(auto i : subset){
        cout<<i<<endl;
    }
}

