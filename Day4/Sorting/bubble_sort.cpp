#include <bits/stdc++.h>
using namespace std;

void printElements(vector<int> &arr) {
    for(auto i: arr) {
        cout << i << endl;
    }
}

void bubble_sort(vector<int> &nums) {
    for(int k=0; k<nums.size()-1; k++) {
        for(int i=0; i<nums.size()-1-k; i++) {
            // Comparing adjacent elements are sorted
            if(nums[i] > nums[i+1]) {
                swap(nums[i], nums[i+1]);
            }
        }
    }
}


int main() {

    vector<int> arr = {2, 1, 5, 16, 6, 7, 11};
    bubble_sort(arr);
    printElements(arr);
    return 0;
}
