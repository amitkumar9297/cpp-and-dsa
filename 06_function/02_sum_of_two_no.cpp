#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    int sum(int,int);
    cout<<"enter two numbers for addition";
    cin>>num1>>num2;
    cout<<"total :"<<sum(num1,num2);

    return 0;
}

int sum(int x,int y)
{
    int z=x+y;
    return z;

}