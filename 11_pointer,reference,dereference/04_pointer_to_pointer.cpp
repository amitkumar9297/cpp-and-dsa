#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    int a=10;
    int *p=&a;              // for storing the memory address of the varible a OR point the variable a
    int **q=&p;             // for storing the memory address of pointer p OR point the pointer

    cout<<*p<<endl;         // one time derefrence,,,,,,,,, gives the value of a

    cout<<*q<<endl;         // one time derefrence of q ,,,,,,,, they gives memory address of pointer p  (*p)

    cout<<**q<<endl;        // second time derefrence of q,,,,,, they give value of a



    return 0;
}