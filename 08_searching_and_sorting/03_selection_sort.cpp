#include<bits/stdc++.h>
using namespace std;

int selection_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                arr[i]=arr[i]+arr[j];
                arr[j]=arr[i]-arr[j];
                arr[i]=arr[i]-arr[j];
            }
        }

    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}

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

    selection_sort(arr,n);


}