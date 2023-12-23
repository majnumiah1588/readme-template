#include<bits/stdc++.h>
using namespace std;
int main(){

    // bitset er variable er index reverse. array te left to right 0 to 1,2,3... but bitset a right to left 0,1,2,3...
    
    int x=20;
    string s="10101";
    bitset<10>bset(10);
    bitset<32>bset2(5);
    bitset<32>bset3(string("1010101"));
    bitset<128>bset4(s);
    bitset<32>bset5(x);
    bset3.set(); // set all index value 1;
    bset5.reset(); // set all index value 0;
    cout<<bset.count()<<endl; // bset variable a kotogulo 1 ase
    bset.flip(); cout<<bset<<endl;
    // bset variable er all indx value complement hoye jabe. (0 to 1 and 1 thakle 0 hobe) ;
    cout<<bset5<<endl;
    cout<<bset4.to_ullong()<<endl;
    cout<<bset[2]<<endl; // right side theke 0,1,2 evabe 2th indx er value ;
}
/*
bitset<32>bset(5);
bitset<32>bests(string("1010101"));
cout<<bsets.to_ullong()<<endl; // string convert into integer
*/