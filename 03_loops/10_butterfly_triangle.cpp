#include<iostream>
using namespace std;


int main()
{
    int n,m,x;
    cout<<"enter no. for printing butterfly pattern";
    cin>>n;
    m=n-1;
    x=0;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
            
        }
        for(int k=m;k>=1;k--)
        {
            cout<<"  ";
        }
        m=m-1;
        for(int l=1;l<=i;l++)
        {
            cout<<"*";

        }
        
        
        cout<<endl;

    }

    for(int i=n;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
        {
            cout<<"*";
        }
        for(int l=1;l<=x;l++)
        {
            cout<<"  ";
        }
        x=x+1;


        for(int k=i;k>=1;k--)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}