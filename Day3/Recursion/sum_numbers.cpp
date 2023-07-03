#include <iostream>

using namespace std;

int sum_natural_numbers(int n) {

    if (n <= 1) {
        return n;
    }
    return n + sum_natural_numbers(n-1);
}

int main() {

    cout << sum_natural_numbers(5) << endl;

    return 0;
}