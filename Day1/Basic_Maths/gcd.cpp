// To find GCD of 2 numbers using Euclid's algorithm

#include <iostream>

using namespace std;

int gcdV1(int a, int b) {

    // using repeatitive subtraction
    while (a != b) {
        if(a > b) {
            a = a-b;
        } else {
            b = b-a;
        }
    }

    return a;
}

// optimized method
int gcdV2(int a, int b) {

    if (b == 0) {
        return a;
    }

    // using modulo division
    return gcdV2(b, a%b);
}

int main() {

    int a, b = 0;

    cout << "Enter 2 numbers to find gcd" << endl;
    cin >> a >> b;
    cout << endl;

    int res = gcdV2(a, b);
    cout << "Using modulo division method" << endl;
    cout << "GCD(" << a << "," << b << ") = " << res << endl;
    cout << endl;

    res = gcdV1(a, b);
    cout << "Using repeatitive subtraction method" << endl;
    cout << "GCD(" << a << "," << b << ") = " << res << endl;
    cout << endl;

    return 0;
}