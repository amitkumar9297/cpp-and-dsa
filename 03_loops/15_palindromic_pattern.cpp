#include<iostream>
using namespace std;

int main()
{
     int n;
     cout<<"enter a no.for printing palindromic ";
     cin>>n;


    for(int i=1;i<=n;i++)
    {
        for(int space=n-i;space>=1;space--)
        {
            cout<<"  ";
        }


        for(int j=i;j>=1;j--)
        {
            cout<<j<<" ";
        }

        for(int k=2;k<=i;++k)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }

    return 0;
}