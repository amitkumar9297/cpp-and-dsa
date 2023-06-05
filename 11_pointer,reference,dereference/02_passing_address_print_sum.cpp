#include<bits/stdc++.h>
using namespace std;

int sum(int *num1 ,int *num2)        // making pointer for storing memory address
{
    int num3=*num1 + *num2;         // * derefrence 
    return num3;
}

int32_t main()
{
    int num1=10;
    int num2=35;
    cout<<sum(&num1,&num2);       // & reffer the address to the function
    return 0;

}