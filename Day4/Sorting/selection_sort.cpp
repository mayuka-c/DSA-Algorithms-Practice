#include <bits/stdc++.h>
using namespace std;

void printElements(vector<int> &arr) {
    for(auto i: arr) {
        cout << i << endl;
    }
}

void selection_sort(vector<int> &nums) {
    for(int i=0; i<nums.size()-1; i++) {
        for(int j=i+1; j<nums.size(); j++) {
            if(nums[j] < nums[i]) {
                swap(nums[i], nums[j]);
            }
        }
    }
}


int main() {

    vector<int> arr = {2, 1, 5, 16, 6, 7, 11};
    selection_sort(arr);
    printElements(arr);
    return 0;
}
