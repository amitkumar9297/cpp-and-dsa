#include<iostream>
using namespace std;

int main()
{
    int num,i;
    cin>>num;

    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            cout<<"it is not a prime no.";
            break;
        }
        
    }
    if(i==num)
    {
        cout<<"it's a prime no."<<endl;
    }


    return 0;
}