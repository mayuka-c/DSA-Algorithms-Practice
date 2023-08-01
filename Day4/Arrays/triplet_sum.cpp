// Link: https://bit.ly/3GbgVs3

/*
    10 5 5 5 2
    k = 12
    O/p:- 5 5 2
*/

#include <bits/stdc++.h>
using namespace std;

// use 2 pointer approach
void findTripletFirst(vector<int> &arr, int k) {

    sort(arr.begin(), arr.end());

    for(int i=0; i<arr.size()-2; i++) {
        int curr_sum = k - arr[i];

        int j = i+1;
        int k = arr.size()-1;

        while(j < k) {
            if(arr[j] + arr[k] == curr_sum) {
                cout << "Triplet: " << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                break;
            } else if (arr[j] + arr[k] < curr_sum) {
                j++;
            } else {
                k--;
            }
        }
    }
}

// uses an unordered set
void findTripletSecond(vector<int> &arr, int k) {

    sort(arr.begin(), arr.end());

    for(int i=0; i<arr.size()-2; i++) {
        unordered_set<int> unique_set;

        for(int j=i+1; j<arr.size(); j++) {
            // Check if the 3rd element is present in the set
            if(unique_set.find(k - arr[i] - arr[j]) != unique_set.end()) {
                cout << "Triplet: " << arr[i] << " " << arr[j] << " " << k - arr[i] - arr[j] << endl;
                break;
            }
            unique_set.insert(arr[j]);
        }
    }

}


int main() {

    vector<int> arr = {10, 5, 5, 5, 2};
    int k = 12;

    findTripletFirst(arr, k);
    findTripletSecond(arr, k);

    return 0;
}
