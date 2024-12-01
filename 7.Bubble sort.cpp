#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) { 
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++) { 
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;

                swapped = true;
            }
        }

        
        if (!swapped) {
            break;
        }
    }
}

int main() {
    int n, a[100];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    BubbleSort(a, n);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
