//
// Link: https://bit.ly/3EwlU6e

/*
    1 3 2 4 5
    k = 5
    Output:
        1 4
        2 3
*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void printElements(vector<int> &arr) {
    for(auto i: arr) {
        cout << i << endl;
    }
}

vector<vector<int>> pairSum(vector<int> &arr, int k) {

    vector<vector<int>> result;
    unordered_map<int, int> map;

    for(auto x: arr) {
        // elements exists with given sum
        if(map.find(abs(k-x)) != map.end()) {
            vector<int> temp;
            temp.push_back(min(x, k-x));
            temp.push_back(max(x, k-x));
            result.push_back(temp);
        } else {
            // if does not exist, simply add it to the map
            map[x]++;
        }
    }

    return result;
}

int main() {

    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 5;

    auto res = pairSum(arr, k);

    for(auto x: res) {
        printElements(x);
    }

    return 0;
}
