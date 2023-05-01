#include <iostream>

using namespace std;

// O(d) - where d is no of bits
int count_set_bits(int n) {
    int count = 0;
    while(n > 0){
        if(n&1 == 1) count++;
        n = n >> 1;
    }
    return count;
}

int main() {
    cout << "Count of set bits: " << count_set_bits(16) << endl;
    return 0;
}