#include <bits/stdc++.h>
using namespace std;

int arr[] = {40, 20, 30, 35, 25, 80, 32, 100, 70, 60};
int size = 10;

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
    if(lt < size && arr[lt] < arr[i]) {
        smallest = lt;
    }
    if(rt < size && arr[rt] < arr[smallest]) {
        smallest = rt;
    }

    if(smallest != i) {
        swap(arr[i], arr[smallest]);
        minHeapify(smallest);
    }
}

void print() {
    for(int i=0; i< 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
  minHeapify(0);
  print();
}