#include <bits/stdc++.h>
using namespace std;

bool checkSorted(vector<int> &nums) {
    int n = nums.size();

    for (int i=1; i<n; i++) {
        if (nums[i]<nums[i-1]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    vector<int> nums1 = {1, 1, 1, 1, 1};

    if (checkSorted(nums)) {
        cout<<"Yes its sorted"<<endl;
    }
    else {
        cout<<"No its not sorted"<<endl;
    }

    if (checkSorted(nums1)) {
        cout<<"Yes its sorted"<<endl;
    }
    else {
        cout<<"No its not sorted"<<endl;
    }
}
