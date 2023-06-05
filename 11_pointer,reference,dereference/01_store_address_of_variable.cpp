/*
POINTER-->  it is a special type of data type that's help to store the memory address of a variable
            memory address in the form of hexadecimal
            (*) the sign of pointer
            (&) the sign of reference
            (&) this sign help to reffere the memory address to the pointer ,,,,,, and pointer store it..


*/ 

#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    int a=10;
    int *pointer=&a;
    cout<<"stored address       "<<pointer<<endl;
    cout<<"refference address   "<<&a<<endl;

    int b=10;
    cout<<&b;
    return 0;
}
