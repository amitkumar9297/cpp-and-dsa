// 0 1 1 2 3 5 8 13 21 ......................

#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    
    return fibonacci(n-1)+fibonacci(n-2);
}

int32_t main()
{
    int a1=0,a2=1;
    int n;
    cout<<"enter a no. for prinnting nth fibbonnacci no. : ";
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}