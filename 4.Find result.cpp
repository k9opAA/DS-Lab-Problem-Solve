#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[100];
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int count = 0;

    for(int i=0; i<n; i++){
        if(a[i]>=40){
            count++;
        }
    }

    cout<<count<<" "<<"Students Passed in the Exam";

    return 0;
}
