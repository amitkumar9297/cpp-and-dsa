#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*factorial(n-1);
}

int32_t main()
{
    int n;
    cout<<"enter a no. to print factorial :  ";
    cin>>n;
    cout<<factorial(n);


    return 0;
}