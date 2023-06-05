#include<iostream>
using namespace std;

int main()
{
    int num,fac;
    cout<<"which num of factorial are you want :";
    cin>>num;
    fac=1;
    for(int i=1;i<=num;i++)
    {
        fac=fac*i;
    }
    cout<<fac;
    return 0;
}