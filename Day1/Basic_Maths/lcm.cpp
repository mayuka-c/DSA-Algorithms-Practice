// To find LCM of 2 numbers using Euclid's algorithm

#include <iostream>

using namespace std;

int gcd(int a, int b) {

    if (b == 0) {
        return a;
    }

    // using modulo division
    return gcd(b, a%b);
}

int lcm(int a, int b) {
    return (a*b)/gcd(a,b);
}

int main() {

    int a, b = 0;

    cout << "Enter 2 numbers to find LCM" << endl;
    cin >> a >> b;
    cout << endl;

    int res = lcm(a, b);
    cout << "LCM(" << a << "," << b << ") = " << res << endl;
    cout << endl;

    return 0;
}