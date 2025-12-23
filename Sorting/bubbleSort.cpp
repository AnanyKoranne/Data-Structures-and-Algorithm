#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr) {
    // Taking size of the array
    int n = arr.size();

    // First outer loop to initialize the array to loop from 0 to n-2
    for (int i=0; i<n-1; i++) {
        // Second inner loop to initialize the value of j from 0 to n-i-1 for which the first index max range would be n-1 that is last element
        for (int j=0; j<n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    bubbleSort(arr);
    for (int v : arr) {
        cout<<v<<" ";
    }
    return 0;
}