#include <bits/stdc++.h>
using namespace std;

void printElements(vector<int> &arr) {
    for(auto i: arr) {
        cout << i << endl;
    }
}

int partition(vector<int> &nums, int start, int end) {
    int pivot = nums[end];
    int pIndex = start;

    for(int i=start; i<=end-1; i++) {
        if(nums[i] <= pivot) {
            swap(nums[i], nums[pIndex]);
            pIndex++;
        }
    }

    swap(nums[pIndex], nums[end]);
    return pIndex;
}

void quick_sort(vector<int> &nums, int start, int end) {
    if(start < end) {
        int pIndex = partition(nums, start, end);
        quick_sort(nums, start, pIndex-1);
        quick_sort(nums, pIndex+1, end);
    }
}


int main() {

    vector<int> arr = {2, 4, 1, 6, 8, 5, 3, 7};
    quick_sort(arr, 0, arr.size()-1);
    printElements(arr);

    return 0;
}
