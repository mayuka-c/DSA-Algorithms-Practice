#include <bits/stdc++.h>
using namespace std;

int arr[] = {20, 30, 4, 5, 14};
int size = 5;

int left(int i)
{
    return (2 * i + 1);
}

int right(int i)
{
    return (2 * i + 2);
}

void minHeapify(int i)
{
    int lt = left(i);
    int rt = right(i);

    int smallest = i;
    if (lt < size && arr[lt] < arr[i])
    {
        smallest = lt;
    }
    if (rt < size && arr[rt] < arr[smallest])
    {
        smallest = rt;
    }

    if (smallest != i)
    {
        swap(arr[i], arr[smallest]);
        minHeapify(smallest);
    }
}

void buildHeap() {
    for(int i = ((size-2)/2); i >= 0; i--) {
        minHeapify(i);
    }
}

void print()
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    print();
    buildHeap();
    print();
}