#include<bits/stdc++.h>
using namespace std;

int sume(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n+sume(n-1);
}

int32_t main()
{
    int n;
    cout<<"enter the no. for sum of n no.s :";
    cin>>n;

    cout<<sume(n);

    return 0;
}