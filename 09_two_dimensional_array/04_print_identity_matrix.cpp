#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    int n,m;
    cout<<"enter rows and columns : ";
    cin>>n>>m;

    int arr[n][m];

    if(n==m)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==j)
                {
                    arr[i][j]=1;
                }
                else
                {
                    arr[i][j]=0;
                }
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