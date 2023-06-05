#include<iostream>
using namespace std;

int main()
{
    int n,r,ncr;
    cout<<"enter the value of 'n' and 'r' ";

    cin>>n>>r;
    int factorial(int);

    ncr=factorial(n)/(factorial(n-r)*factorial(r));
    cout<<ncr;



    return 0;
}
int factorial(int num)
{
    int fact=1;
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    return fact;
}