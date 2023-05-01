#include <iostream>

using namespace std;

bool iskthSet(int n, int k) {
    int x = (1 << (k-1));
    cout << (n&x) << endl;
    if((n&x) != 0) {
        return true;
    }
    return false;
}

int main() {
    cout << iskthSet(8, 4) << endl;
    return 0;
}