#include<iostream>
using namespace std;

int main(void)
{
     int n;
     cout<<"enter a no.for printing palindromic ";
     cin>>n;

    int count =-1;
    int ddecrease=count;
    for(int i=1;i<=n;i++)
    {
        count +=1;
        for(int space=n-i;space>=1;space--)
        {
            cout<<"\t";
        }


        for(int j=i;j<=count+i;j++)
        {
            cout<<j<<"\t";
        }

        for(int k=count+i-1;k>=i;--k)
        {
            cout<<k<<"\t";
        }
        cout<<endl;
    }

    return 0;
}