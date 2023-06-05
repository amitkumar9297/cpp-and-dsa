#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    int n,m;
    cout<<"enter rows and columns of 1st matrix";
    cin>>n>>m;

    int p,q;
    cout<<"enter rows and columns of 2nd matrix";
    cin>>p>>q;

    int mat1[n][m],mat2[p][q];

    if(m==p)
    {
        cout<<"enter the elments of 1st matrix"<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>mat1[i][j];
            }
        }
        
        cout<<"enter the element of 2nd matrix"<<endl;
            for(int i=0;i<p;i++)
        {
            for(int j=0;j<q;j++)
            {
                cin>>mat2[i][j];
            }
        }

        int mat3[n][q];
        int sum=0;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<q;j++)
            {
                sum=0;
                for(int k=0;k<m;k++)
                {
                    sum+=mat1[i][k]*mat2[k][j];

                }
                cout<<sum<<"\t";
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"multipliccation of this matrix are not possible";
    }


    return 0;
}