#include<iostream>
using namespace std;
#include<math.h>

int main()
{
    int start,end;
    bool prime(int);

    cout<<"enter the limits un which find prime no. :";
    cin>>start>>end;

    for(int i=start;i<=end;i++)
    {
        if(prime(i))
        {
            cout<<i<<endl;
        }
    }

    

    return 0;
}


bool prime(int num)
{
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
}