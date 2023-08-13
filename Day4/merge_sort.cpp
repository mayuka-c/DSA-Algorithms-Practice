#include <bits/stdc++.h>
using namespace std;

void printElements(vector<int> &arr) {
    for(auto i: arr) {
        cout << i << endl;
    }
}

void merge(vector<int> &left, vector<int> &right, vector<int> &nums) {
    int i = 0;
    int j = 0;
    int k = 0;
    while(i < left.size() && j < right.size()){
        if(left[i] < right[j]) {
            nums[k] = left[i];
            i++;
        } else {
            nums[k] = right[j];
            j++;
        }
        k++;
    }
    while(i < left.size()) {
        nums[k++] = left[i++];
    }
    while(j < right.size()) {
        nums[k++] = right[j++];
    }
}

void merge_sort(vector<int> &nums) {
    int n = nums.size();

    if (n < 2) {
        return;
    }

    int mid = n/2;
    vector<int> left, right;
    
    for(int i=0; i<n; i++){
        if(i < mid) {
            left.push_back(nums[i]);
        } else {
            right.push_back(nums[i]);
        }
    }

    merge_sort(left);
    merge_sort(right);
    merge(left, right, nums);
}


int main() {

    vector<int> arr = {2, 4, 1, 6, 8, 5, 3, 7};
    merge_sort(arr);
    printElements(arr);

    return 0;
}
