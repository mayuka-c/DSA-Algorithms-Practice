#include <bits/stdc++.h>
using namespace std;

void printKLargest(int arr[], int n, int k)
{
    priority_queue<int> pq(arr, arr + n);

    while (k > 0)
    {
        cout << pq.top() << " ";
        pq.pop();
        k--;
    }
    cout << endl;
}

// better solution
void printKLargestV2(int arr[], int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq(arr, arr + k);

    for (int i = k; i < n; i++)
    {
        if (arr[i] > pq.top())
        {
            pq.pop();
            pq.push(arr[i]);
        }
    }

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
}

int main()
{
    int arr[] = {5, 15, 10, 20, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    printKLargestV2(arr, n, k);
}