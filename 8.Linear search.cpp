#include <bits/stdc++.h>
using namespace std;

int linearSearch(int a[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (a[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int n, a[100], target;
    cin >> n; 

    for (int i = 0; i < n; i++) {
        cin >> a[i]; 
    }

    cin >> target; 

    int result = linearSearch(a, n, target); 

    if (result != -1) {
        cout << "Element found at index: " << result << endl; 
    } else {
        cout << "Not Found" << endl; 
    }

    return 0;
}
