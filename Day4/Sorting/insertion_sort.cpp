#include <bits/stdc++.h>
using namespace std;

void printElements(vector<int> &arr) {
    for(auto i: arr) {
        cout << i << endl;
    }
}

void insertion_sort(vector<int> &nums) {
    for(int i=1; i<nums.size(); i++) {
        int value = nums[i];
        int hole = i;
        while(hole > 0 && nums[hole-1] > value) {
            nums[hole] = nums[hole-1];
            hole--;
        }
        nums[hole] = value;
    }
}


int main() {

    vector<int> arr = {2, 1, 5, 16, 6, 7, 11};
    insertion_sort(arr);
    printElements(arr);
    return 0;
}
