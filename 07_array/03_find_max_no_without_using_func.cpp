#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    int maxno;
    int n;
    cout<<"how many elements are you want to enter : ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    maxno=arr[0];

    for(int i=1;i<n;i++)
    {
        if(arr[i]>maxno)
        {
            maxno=arr[i];
        }

    }
    cout<<maxno;
    
    return 0;
}