#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[100];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int largest = a[0];

    for (int i = 0; i < n; i++)
    {
        if(a[i]>largest){
            largest = a[i];
        }
    }

    cout<<largest;

    return 0;
}
