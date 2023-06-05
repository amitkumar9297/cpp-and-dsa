#include<iostream>
using namespace std;

int main()
{
    int num;
    int factorial(int); // declaration of function
    cout<<"which num of factorial are you want :";
    cin>>num;    
    cout<<factorial(num);
    return 0;
}

int factorial(int n)
{

    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    
    return fact;
    
}