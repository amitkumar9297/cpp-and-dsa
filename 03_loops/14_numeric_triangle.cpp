#include<iostream>
using namespace std;

int main()
{
    int n,m,digit;
    cout<<"enter a number for printing numeric triangle pattern";
    cin>>n;
    m=0;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}