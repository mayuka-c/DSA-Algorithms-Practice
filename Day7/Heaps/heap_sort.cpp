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

void minHeapify(int i, int size)
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
        minHeapify(smallest, size);
    }
}

void buildHeap() {
    for(int i = ((size-2)/2); i >= 0; i--) {
        minHeapify(i, size);
    }
}

void heapSort() {
    buildHeap();
    int loop_size = size;
    for(int i = loop_size-1; i >=1; i--) {
        swap(arr[0], arr[i]);
        loop_size--;
        minHeapify(0, loop_size);
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
    heapSort();
    print();
}