#include <bits/stdc++.h>
using namespace std;

int count_items(int arr[], int n, int total_sum)
{
    priority_queue<int, vector<int>, greater<int>> pq(arr, arr + n);
    int count = 0;

    while (!pq.empty())
    {
        total_sum -= pq.top();
        if (total_sum < 0)
        {
            break;
        }
        pq.pop();
        count++;
    }

    return count;
}

int main()
{
    int cost[] = {1, 12, 5, 111, 200};
    int n = sizeof(cost) / sizeof(cost[0]);
    int total_sum = 10;

    cout << count_items(cost, n, total_sum) << endl;
}