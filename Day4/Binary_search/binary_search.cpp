#include <bits/stdc++.h>
using namespace std;

void printElements(vector<int> &arr) {
    for(auto i: arr) {
        cout << i << endl;
    }
}

bool binarySearch(vector<int> &nums, int key) {
    int start = 0;
    int end = nums.size()-1;
    int mid = (start+end)/2;

    while(start<=end) {
        if(nums[mid] == key) {
            return true;
        }
        if(key > nums[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = (start+end)/2;
    }

    return false;
}


int main() {

    vector<int> arr = {2, 4, 6, 8, 13, 27, 43};
    int key = 2;

    if (binarySearch(arr, key)) {
        cout << "Key is present" << endl;
    } else {
        cout << "Key is not present" << endl;
    }

    return 0;
}
