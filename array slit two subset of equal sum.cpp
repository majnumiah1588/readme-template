#include <iostream>
#include <vector>

using namespace std;

bool canPartition(vector<int>& nums, vector<int>& subset1, vector<int>& subset2, int index, int sum1, int sum2) {
    if (index == nums.size()) {
        if (sum1 == sum2) {
            return true;
        }
        return false;
    }

    // Try putting the current element in subset1
    subset1.push_back(nums[index]);
    if (canPartition(nums, subset1, subset2, index + 1, sum1 + nums[index], sum2)) {
        return true;
    }
    subset1.pop_back(); // Backtrack

    // Try putting the current element in subset2
    subset2.push_back(nums[index]);
    if (canPartition(nums, subset1, subset2, index + 1, sum1, sum2 + nums[index])) {
        return true;
    }
    subset2.pop_back(); // Backtrack

    return false;
}

int main() {
    vector<int> nums = {1, 5, 11, 5}; // Replace this with your array
    vector<int> subset1, subset2;

    int totalSum = 0;
    for (int num : nums) {
        totalSum += num;
    }

    if (totalSum % 2 == 0 && canPartition(nums, subset1, subset2, 0, 0, 0)) {
        cout << "YES" << endl;
        cout << "First set elements: " << subset1.size() << endl;
        for (int num : subset1) {
            cout << num << " ";
        }
        cout << endl;

        cout << "Second set elements: " << subset2.size() << endl;
        for (int num : subset2) {
            cout << num << " ";
        }
        cout << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

