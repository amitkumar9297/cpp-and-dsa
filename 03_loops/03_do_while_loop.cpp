#include<iostream>
using namespace std;

int main()
{
    cout<<"which table are you want to print"<<endl;
    
    int digit,count,table;
    cin>>digit;

    cout<<"the table of entered digit is";
    count=0;

    do
    {
        table=digit*count;
        cout<<table<<endl;
        count=count+1;
    }
    while(count<=10);

    return 0;
    
}