#include<bits/stdc++.h>
using namespace std;

bool sorted(int arr[],int n)
{
    if(n==1)
    {
        return true;
    }
    bool rest_array=sorted(arr+1,n-1);
    
    return (arr[0]<arr[1] && rest_array);
}

int32_t main()
{
    int n;
    cout<<"how many elements are you enter : ";
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<sorted(arr,n);

  
    return 0;
}