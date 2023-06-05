#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    int n;
    cout<<"how many element are you want to enter :";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int counter=0;
    while(counter<n)
    {
        
        for(int i=0;i<n-counter;i++)
        {
            if(arr[i]>arr[i+1])
            {
                arr[i]=arr[i+1]+arr[i];
                arr[i+1]=arr[i]-arr[i+1];
                arr[i]=arr[i]-arr[i+1];
            }
        }
        counter+=1;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}