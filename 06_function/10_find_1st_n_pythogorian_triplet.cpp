/*
formula for finding pythogorian triplet
2(n),n^2-1,n^2+1
*/

#include<iostream>
using namespace std;

int triplet(int n)
{
    for(int i=1;i<=n;i++)
    {

        int a=i;
        if(a==i)
        {
            cout<<2*i<<" \t";
        }
        if(a==i)
        {
            cout<<i*i-1<<" \t";
        }
        if(a==i)
        {
            cout<<i*i+1<<" \t";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"enter number for printing first n pythogorian triplet";

    cin>>n;
    triplet(n);

    return 0;
}