#include<iostream>
using namespace std;

int main()
{
    int num,last_dig,reverse;
    cout<<"enter a number for reversing : ";
    cin>>num;
    reverse=0;

    while(num>0)
    {
        last_dig=num%10;
        reverse=reverse*10+last_dig;
        num=num/10;
    }
    cout<<reverse;


    return 0;
}