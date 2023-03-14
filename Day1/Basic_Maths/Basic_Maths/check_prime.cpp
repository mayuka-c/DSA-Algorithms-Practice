// To check whether a number is prime

#include <iostream>

using namespace std;

bool isPrimeV1(int n) {

    if(n == 1) return false;

    for(int i=2; i<n; i++) {
        if(n%i == 0) return false;
    }

    return true;
}

// Optimized - O(sqrt(n))
bool isPrimeV2(int n) {

    if(n == 1) return false;

    if(n==2 || n==3) return true;

    if (n%2==0 || n%3==0) return false;

    // loop till sqrt(n) and increment i by 6
    for(int i=5; i*i<n; i+=6) {
        // First iteration it will be 5 & 7
        // Second iteration it will be 11 & 13
        if(n%i == 0 || n%(i+2) == 0) return false;
    }

    return true;
}

int main() {

    int n;
    cout <<"Enter a number: "<< endl;
    cin >> n;
    cout << endl;

    bool isPrime = isPrimeV1(n);
    cout << "Naive Method" << endl;
    cout << "---------------" << endl;
    if (isPrime) {
        cout << n << " is a prime number" << endl;
    } else {
        cout << n << " is not a prime number" << endl;
    }

    cout << endl;

    isPrime = isPrimeV2(n);
    cout << "Optimized Method" << endl;
    cout << "---------------" << endl;
    if (isPrime) {
        cout << n << " is a prime number" << endl;
    } else {
        cout << n << " is not a prime number" << endl;
    }

    return 0;
}