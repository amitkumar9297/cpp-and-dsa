// que= mother allow to go outside from home only odd dates . his mother gives him some pocketmoney.if pocket money end .she cannnot go.

#include<iostream>
using namespace std;

int main()
{
    int pocketmoney=3000;
    for(int date=1;date<=31;date++)
    {
        if(date%2==0)
        {
            continue;
        }
        if(pocketmoney==0)
        {
            break;
        }
        cout<<"go out today!!"<<endl;
        pocketmoney=pocketmoney-300;
    }
}