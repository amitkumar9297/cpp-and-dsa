#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    char arr[20];
    int n;
    cout<<"how many words are you want to enter ";
    cin>>n;

    cin>>arr;
    for(int i=0;i<n;i++)
    {
        for(int j=48;j<58;j++)
        {
            if(arr[i]==char(j))
            {

                cout<<arr[i];
            }
        }
    }

    return 0;
}