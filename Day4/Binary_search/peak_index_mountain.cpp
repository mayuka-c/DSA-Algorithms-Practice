// Link: https://leetcode.com/problems/peak-index-in-a-mountain-array

#include <bits/stdc++.h>
using namespace std;

int peakIndex(vector<int> &nums) {
    int start = 0;
    int end = nums.size()-1;
    int mid = (start+end)/2;

    while(start<end) {
        if(nums[mid] < nums[mid+1]) {
            start = mid + 1;
        } else {
            end = mid;
        }
        mid = (start+end)/2;
    }

    return start;
}


int main() {

    vector<int> arr = {0, 10, 5, 2};
    cout << "Peak index: " << peakIndex(arr) << endl;
    return 0;
}
