/*
find greater no. and sqare it . then square and add other remaining two no.s,,and compare it.
if equal that means given triplet no. is a pythogorian triplet..
*/

#include<iostream>
using namespace std;
#include<cmath>

bool check(int num1 ,int num2 ,int num3)
{
    int a= max(num1, max(num2,num3));
    
    int b,c;

    if(a==num1)
    {
        b=num2;
        c=num3;

    }
    else if (a==num2)
    {
        b=num1;
        c=num3;
    }
    else if (a==num3)
    {
        b=num1;
        c=num2;
    }
    
    if(a*a==b*b+c*c)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int num1,num2,num3;
    cout<<"enter three numbers for checking pythogorian triplet or not";

    cin>>num1>>num2>>num3;

    if(check(num1,num2,num3))
    {
        cout<<"it is a pythogorian triplet";

    }
    else
    {
        cout<<"not a pythogorian triplet";
    }



    return 0;
}