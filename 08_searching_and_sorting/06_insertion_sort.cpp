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

    for(int i=1;i<n;i++)
    {
        int current = arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }


}