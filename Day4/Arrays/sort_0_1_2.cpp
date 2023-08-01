// Dutch National Flag problem
// Link: https://bit.ly/3DfQW0s

/*
    0 1 2 2 1 0
    O/p:- 0 0 1 1 2 2
*/

#include <bits/stdc++.h>
using namespace std;

void printElements(vector<int> &arr) {
    for(auto i: arr) {
        cout << i << endl;
    }
}

void sort012(vector<int> &nums) {

    int low = 0;
    int mid = 0;
    int high = nums.size()-1;

    while(mid<=high) {
        switch(nums[mid]) {
            case 0:
                swap(nums[low], nums[mid]);
                low++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(nums[mid], nums[high]);
                high--;
                break;
        }
    }
 }


int main() {

    vector<int> arr = {2, 0, 1};

    sort012(arr);
    printElements(arr);

    return 0;
}
