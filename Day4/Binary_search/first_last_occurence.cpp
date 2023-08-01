// Link: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array

#include <bits/stdc++.h>
using namespace std;

int firstOcc(vector<int> &nums, int key) {
    int start = 0;
    int end = nums.size()-1;
    int mid = (start+end)/2;
    int ans = -1;

    while(start<=end) {
        if(nums[mid] == key) {
            ans = mid;
            end = mid - 1;
        } else if(key > nums[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = (start+end)/2;
    }

    return ans;
}

int lastOcc(vector<int> &nums, int key) {
    int start = 0;
    int end = nums.size()-1;
    int mid = (start+end)/2;
    int ans = -1;

    while(start<=end) {
        if(nums[mid] == key) {
            ans = mid;
            start = mid + 1;
        } else if(key > nums[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = (start+end)/2;
    }

    return ans;
}


int main() {

    vector<int> arr = {5,7,7,8,8,10};
    // vector<int> arr = {2,2};
    int key = 2;

    cout << "First occurence: " << firstOcc(arr, key) << endl;
    cout << "Last occurence: " << lastOcc(arr, key) << endl;

    return 0;
}
