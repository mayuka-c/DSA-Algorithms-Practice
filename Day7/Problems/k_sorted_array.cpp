#include <bits/stdc++.h>
using namespace std;

// O(klogk + (n-)logk + k)

void sortk(int arr[], int n, int k) {
    priority_queue<int, vector<int>, greater<int>> pq;

    for(int i=0; i<=k; i++) {
        pq.push(arr[i]);
    }

    int index = 0;
    for(int i=k+1; i<n; i++) {
        pq.push(arr[i]);
        arr[index++] = pq.top();
        pq.pop();
    }

    while(!pq.empty()) {
        arr[index++] = pq.top();
        pq.pop();
    }
}

void print(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {9, 8, 7, 19, 17};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    sortk(arr, n, k);
    print(arr, n);
}