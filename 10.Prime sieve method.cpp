#include <iostream>
using namespace std;

void sieveOfEratosthenes(bool isPrime[], int maxLimit) {
    for (int i = 0; i <= maxLimit; i++) {
        isPrime[i] = true;
    }

    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= maxLimit; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= maxLimit; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

int main() {
    const int maxLimit = 32768;
    bool isPrime[maxLimit + 1];

    sieveOfEratosthenes(isPrime, maxLimit);

    int n;
    cout << "Enter a number (1 < n < 32768): ";
    cin >> n;



    if (isPrime[n]) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}
