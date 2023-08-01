// Intersection Of Two Sorted Arrays
// Link: https://bit.ly/3Il0c7n

/*
    1 2 2 2 3 4
    2 2 3 3
    O/p:- 2 2 3
*/

#include <iostream>
#include <vector>

using namespace std;

void printElements(vector<int> &arr) {
    for(auto i: arr) {
        cout << i << endl;
    }
}

vector<int> findIntersectionElements(vector<int> &arr1, vector<int> &arr2) {

    vector<int> result;
    int i = 0;
    int j = 0;

    while(i<arr1.size() && j<arr2.size()) {
        if(arr1[i] == arr2[j]) {
            result.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i] > arr2[j]) {
            j++;
        } else {
            i++;
        }
    }

    return result;
}

int main() {

    vector<int> arr1 = {1, 2, 2, 2, 3, 4};
    vector<int> arr2 = {2, 2, 3, 3};
    vector<int> res = findIntersectionElements(arr1, arr2);
    printElements(res);

    return 0;
}