#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    int sum(int,int);
    
    cout<<"please enter two no.s for addition";
    cin>>num1>>num2;
    cout<<"total"<<sum(num1,num2);

    return 0;
}

int sum(int val1,int val2)
{
    void print(int);

    print(val1);
    print(val2);
    int val3=val1+val2;
    return val3;
}

void print(int value)
{
    cout<<value<<endl;
    return;
}