// To find prime factors of given number n using "Sieve of Erastosthenes"
// Ex:- n=10; 2 3 5 7

#include <iostream>
#include <vector>

using namespace std;

// Optimized :- O(nlog(logn))
void printPrimeFactors(int n) {

    vector<bool> isPrime(n+1, true);

    for(int i=2; i<=n; i++) {
        if(isPrime[i]) {
            cout << i << endl;
            for(int j=i*i; j<=n; j=j+i) {
                isPrime[j] = false;
            }
        }
    }
}

int main() {

    int n;
    cout <<"Enter a number: "<< endl;
    cin >> n;
    cout << endl;

    printPrimeFactors(n);

    return 0;
}