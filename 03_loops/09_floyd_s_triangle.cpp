#include<iostream>
using namespace std;

int main()
{
    int n,a;
    cout<<"please enter a number for printing a num pattern";
    cin>>n;
    a=1;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<a<<" ";
            a=a+1;
        }
        cout<<endl;
    }
    return 0;
}