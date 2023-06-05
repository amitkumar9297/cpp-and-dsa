#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    int n,m;
    cout<<"enter row and column : ";
    cin>>n>>m;

    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    if(n==m)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<m;j++)
            {
                int temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;

    }


    return 0;
}