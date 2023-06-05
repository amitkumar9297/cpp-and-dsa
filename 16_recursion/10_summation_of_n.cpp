#include<bits/stdc++.h>
using namespace std;

void summation(int n,int sum=0)
{
    if(n==0)
    {
        cout<<sum;
        return;
    }
    summation(n-1,sum+n);
}

int32_t main()
{
    int n=10;
    summation(n);
    
    return 0;
}