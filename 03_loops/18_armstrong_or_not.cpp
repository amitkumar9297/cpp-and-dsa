#include<iostream>
using namespace std;
#include<math.h>

int main()
{
    int num,last_dig,sum,original_num;
    cout<<"enter a number for checking armstrong or not : ";
    cin>>num;
    sum=0;
    original_num=num;

    while(num>0)
    {
        last_dig=num%10;
        sum+=last_dig*last_dig*last_dig;
        num=num/10;

    }
    if(sum==original_num)
    {
        cout<<"it's armstrong number";
    }
    else
    {
        cout<<"it's not an armstrong number";
    }


    return 0;

}