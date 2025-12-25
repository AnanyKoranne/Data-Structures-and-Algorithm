#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> &nums) {
    int n = nums.size();

    int largest = nums[0];
    int secondLargest = -1;

    for (int i=1; i<n; i++) {
        if (nums[i]>largest) {
            secondLargest = largest;
            largest = nums[i];
        }
        if (nums[i]< largest && nums[i]>secondLargest) {

            secondLargest = nums[i];
        }
    }

    return secondLargest;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 8};
    int sLargest = secondLargest(nums);
    cout<<sLargest<<endl;
}