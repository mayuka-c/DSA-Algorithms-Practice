// To print all divisors of n in sorted order
// Ex: n=6 -> 1 2 3 6

#include <iostream>

using namespace std;

void printDivisors(int n) {

    int i;

    // forward till sqrt(n)
    for(i=1; i*i<n; i++) {
        if(n%i == 0) cout << i << endl;
    }

    // Decrement i, before proceeding backwards
    i--;

    // backward till i reaches 1
    for(; i>=1; i--) {
        if(n%i == 0) cout << (n/i) << endl;
    }
}

int main() {

    int n;
    cout <<"Enter a number: "<< endl;
    cin >> n;
    cout << endl;

    printDivisors(n);

    return 0;
}