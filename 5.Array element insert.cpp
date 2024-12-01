#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[100];
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int x, pos;
    cin>>x>>pos;

    n++;

    for(int i=n-1; i>=pos; i--){
        a[i]=a[i-1];
    }

    a[pos-1] = x;

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
