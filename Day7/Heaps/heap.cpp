#include <bits/stdc++.h>
using namespace std;

class MinHeap
{
public:
    int *arr;
    int cap;
    int size;

    MinHeap(int c)
    {
        arr = new int[c];
        size = 0;
        cap = c;
    }

    int left(int i)
    {
        return (2*i + 1);
    }
    int right(int i)
    {
        return (2*i + 2);
    }
    int parent(int i)
    {
        return (i - 1) / 2;
    }

    void insert(int x)
    {
        if (size == cap)
            return;
        size++;
        arr[size - 1] = x;

        int i = size - 1;
        while (i != 0 && arr[i] < arr[parent(i)])
        {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }
};

void print(int arr[], int n) {
    for(int i=0; i< n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    MinHeap* heap = new MinHeap(8);
    heap->insert(10);
    heap->insert(20);
    heap->insert(30);
    heap->insert(15);
    heap->insert(8);

    print(heap->arr, heap->size);
}
