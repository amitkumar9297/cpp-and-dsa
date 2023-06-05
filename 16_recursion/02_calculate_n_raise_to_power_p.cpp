#include<bits/stdc++.h>
using namespace std;

int n_raise_to_power(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
    return n*n_raise_to_power(n,p-1);
}

int32_t main()
{
    int n,p;
    cout<<"please enter the base value: ";
    cin>>n;
    cout<<"please enter exponenet value: ";
    cin>>p;

    cout<<n_raise_to_power(n,p);
    
    return 0;
}