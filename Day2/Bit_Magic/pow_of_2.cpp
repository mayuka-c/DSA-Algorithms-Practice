#include <iostream>

using namespace std;

// Using brian cunningham algorithm O(1)
// There is only 1 set bit in powers of 2 so n-1 will always set rightmost set bit to 0
bool pow2(int n) {
    if (n==0) return false;
    return ((n & (n-1)) == 0);
}

int main() {
    cout << "Is Power of 2: " << pow2(16) << endl;
    return 0;
}