#include <bits/stdc++.h>
using namespace std;

// max_heap
int main() {
    priority_queue<int> pq;
    pq.push(10);
    pq.push(5);
    pq.push(20);

    cout << pq.size() << endl;
    while(!pq.empty()) {
        cout << pq.top() << endl;
        pq.pop();
    }
}