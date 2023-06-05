#include<bits/stdc++.h>
using namespace std;
#include<climits>
#include<cmath>

int32_t main()
{
    int maxno=INT_MIN;
    int n;
    cout<<"how many element are you want to enter";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    for(int i=0;i<n;i++)
    {
        maxno=max(maxno,arr[i]);
        //cout<<maxno<<" ";
    }
    cout<<maxno;


    return 0;
}