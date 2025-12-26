#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int removeDuplicates(vector<int> &nums) {
    int n = nums.size();

    int i = 0;

    for (int j=1; j<n; j++) {
        if (nums[j] != nums[i]) {
            nums[i+1] = nums[j];
            i++;
        }
    }
    return i+1;
}

int main() {

    vector<int> nums = {1, 1, 2, 2, 3, 3, 3, 4};
    for (int i=0; i<nums.size(); i++) {
        cout<<nums[i]<<" "; 
    }
    cout<<endl;
    int count = removeDuplicates(nums);
    cout<<count<<endl;
    return 0;
}