#include <iostream>
#include <vector>
using namespace std;

int largestElement(vector<int> &nums) {
    int n = nums.size();
    int largest = nums[0];

    for (int i=1; i<n; i++) {
        if (nums[i] > largest) {
            largest = nums[i];
        }
    }

    return largest;

}

int main() {
    vector<int> nums = {3,3,5,6,5,43,7,8,9,76,7};
    int lar = largestElement(nums);
    cout<<lar<<endl;
    return 0;
}