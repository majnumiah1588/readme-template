#include<bits/stdc++.h>
using namespace std;

vector<string> subset;
string current = "";

void generateSubset(string &s,int i){
    if(i == s.size()) {
        subset.push_back(current);

        return;
    }

    //take
    current.push_back(s[i]);
    generateSubset(s,i+1);
    current.pop_back();

    //not take
    generateSubset(s,i+1);

}

int main(){
    string s ;
    generateSubset(s,0);
    for(auto i : subset){
        cout<<i<<endl;
    }
}
