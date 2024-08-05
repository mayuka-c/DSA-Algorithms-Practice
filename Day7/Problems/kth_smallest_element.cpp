#include <bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int n, int k) {
    // max heap
    priority_queue<int> pq;

    for(int i=0; i<n; i++) {
        pq.push(arr[i]);

        if(pq.size() > k) {
            pq.pop();
        }
    }

    return pq.top();
}

int main()
{
    int arr[] = {5, 15, 10, 20, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    cout << kthSmallest(arr, n, k) << endl;
}