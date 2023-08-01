// Link: https://bit.ly/3dm6bdZ

/*
    Ex:- arr = [4 2 1 3 1]
    Solution:- 1
*/

#include <iostream>
#include <vector>

using namespace std;

int findDuplicate(vector<int> &arr) {

    int result = 0;
    int n = arr.size();

    for(int i=0; i<n; i++) {
        // do xor operation
        result = result ^ arr[i];
    }

    for(int i=1; i<n; i++) {
        result = result ^ i;
    }

    return result;
}

int main() {

    vector<int> arr = {4, 2, 1, 3, 1};
    cout << "Duplicate element: " << findDuplicate(arr) << endl;

    return 0;
}