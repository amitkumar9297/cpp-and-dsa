#include<iostream>
using namespace std;

int main()
{
    int n;
    void fib(int);
    cout<<"which term of fibbonacci sequence are you want to print";

    cin>>n;
    fib(n);
    
    return 0;
}

void fib(int n)
{
    int t1=0,t2=1,next_term;
    for(int i=3;i<=n;i++)
    {
        next_term=t1+t2;
        t1=t2;
        t2=next_term;
    }
    cout<<next_term;

}