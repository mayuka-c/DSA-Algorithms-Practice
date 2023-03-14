// To find the power of a number with pow(x,n)
// pow(2,3) -> 2^3 = 8
// Binary representation - 2^3 - 011 (powers in binary)

#include <iostream>

using namespace std;

// Iterative power - O(logn)
int power(int x, int n) {

    int res=1;
    while(n>0) {
        if(n%2 != 0) res=res*x;
        x=x*x;
        n=n/2;
    }

    return x;
}

int main() {

    int x, n;
    cout <<"Enter a number and power: "<< endl;
    cin >> x >> n;
    cout << endl;

    int res = power(x, n);
    cout << "Result: " << res << endl;

    return 0;
}