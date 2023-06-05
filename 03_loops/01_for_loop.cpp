#include<iostream>
using namespace std;

int main()
{
    cout<<"which table are you want to print"<<endl;
    int digit,table;
    cin>>digit;

    cout<<"the table of"<<digit<<"is"<<endl;

    for(int count=1;count<=10;count++)
    {
        table=count*digit;
        cout<<table<<endl;
        

    }

    return 0;
}
