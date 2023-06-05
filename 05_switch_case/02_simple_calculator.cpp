#include<iostream>
using namespace std;

int main()
{
    int n1,n2;
    cout<<"input 2 no.s";
    cin>>n1>>n2;

    char sign;
    cin>>sign;

    switch(sign)
    {
        case '*':
        cout<<"multiplication of the no.s is"<<n1*n2;
        break;

        case '+':
        cout<<"addition of the no.s is"<<n1+n2;
        break;

        case '-':
        cout<<"substraction of the no.s is"<<n1-n1;
        break;

        case '%':
        cout<<"reminder of the no. is"<<n1%n1;
        break;

        case '/':
        cout<<"division of the no. is"<<n1/n2;
        break;

        default:
        cout<<"please enter a valid sign";
    }

    return 0;
}