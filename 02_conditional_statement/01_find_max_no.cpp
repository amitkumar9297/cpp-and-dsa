#include<iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout<<"enter three numbers"<<endl;
    cin>>a>>b>>c;

    if(a>b)
    {
        if(a>c)
        {
            cout<<"maximum number is "<<a<<endl;
        }
        else
        {
            cout<<"maximum number is "<<c<<endl;
        }
    }
    else if(b>c)
    {
        cout<<"maximum number is "<<b<<endl;
    }
    else if(c>a)
    {
        cout<<"maximum number is "<<c<<endl;
    }
    else
    {
        cout<<"all no.s are equal";
    }


    return 0;

}