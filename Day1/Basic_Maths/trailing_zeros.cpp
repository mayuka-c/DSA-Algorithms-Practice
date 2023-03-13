// To find all the trailing zeros in a factorial
// Here we count it based on number of 5's in given factorial

#include <iostream>

using namespace std;

int findTrailingZeros(int n) {

    int zerosCount = 0;

    for (int i=5; i<=n; i=i*5) {
        zerosCount += n/i;
    }

    return zerosCount;
}

int main() {

    int n;
    cout <<"Enter a number: "<< endl;
    cin >> n;
    cout << endl;

    int zerosCount = findTrailingZeros(n);
    cout << "Number of trailing zeros: " << zerosCount << endl;

    return 0;
}