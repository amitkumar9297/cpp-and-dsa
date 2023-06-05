#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int n,int i)
{
    if(i>=n/2) 
    {   
        return;
    }
    int temp=arr[i];
    arr[i]=arr[n-i-1];
    arr[n-i-1]=temp;
    reverse(arr,n,i+1);
}

int32_t main()
{
    int n;
    cout<<"how many elements are you want to enter : ";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++) 
    {
        cin>>arr[i];
    }
    reverse(arr,n,0);

    for(int i=0;i<n;i++) 
    {
        cout<<arr[i];
    }
    return 0;
}