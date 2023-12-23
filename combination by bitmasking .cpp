#include <bits/stdc++.h>
using namespace std;

void printCombination(const string& input, int mask) {
    for (int i = 0; i < input.size(); ++i) {
        if (mask & (1 << i)) {
            cout << input[i];
        }
    }
    cout << "\n";
}

int main() {
    string input = "abcd";

    int n = input.size();
    int maxMask = (1 << n) - 1; // Generate all subsets using bitmask

    for (int mask = 0; mask <= maxMask; ++mask) {
        printCombination(input, mask);
    }

    return 0;
}
