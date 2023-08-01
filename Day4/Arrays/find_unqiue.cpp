// Link: https://bit.ly/3y01Zdu

/*
    Ex:- arr = [1, 4, 5, 5, 1]
    Solution:- 4
*/

#include <iostream>
#include <vector>

using namespace std;

int findUnique(vector<int> &arr) {

    int result = 0;
    int n = arr.size();

    for(int i=0; i<n; i++) {
        // do xor operation
        result = result ^ arr[i];
    }

    return result;
}

int main() {

    vector<int> arr = {1, 4, 5, 5, 1};
    cout << "Unique element: " << findUnique(arr) << endl;

    return 0;
}