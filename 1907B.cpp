#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int t;
   cin >> t;
    while (t--) {
         string s;
         cin >> s;
        int n = s.size();
         vector<int> upper;
         vector<int> lower;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'b') {
                s[i] = '';
                if (!lower.empty()) {
                    s[lower.back()] = '';
                    lower.pop_back();
                }
                continue;
            }
            if (s[i] == 'B') {
                s[i] = '';
                if (!upper.empty()) {
                    s[upper.back()] = '';
                    upper.pop_back();
                }
                continue;
            }
            if ('a' <= s[i] && s[i] <= 'z') {
                lower.push_back(i);
            } else {
                upper.push_back(i);
            }
        }
        string ans="";
        for(int i=0; i<s.size(); i++){
            if(s[i]!='') ans+=s[i];
        }
         cout << ans <<  endl;
    }
    return 0;
}

