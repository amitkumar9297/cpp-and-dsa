#include<bits/stdc++.h>
using namespace std;

void increment(int *a)
{
    cout<<"value of a before increemented : "<<*a<<endl;
    *a+=1;
    
    cout<<"value of a after increemented : "<<*a<<endl;


}

void incree(int *b)
{
    cout<<"value of b befor incree  : "<<*b<<endl;
    *b+=1;
    //cout<<b<<endl;
    cout<<"value of b after incree : "<<*b<<endl;

}

int32_t main()
{
    int a=2;
    int b=5;
    int *aptr=&a;

    increment(aptr);
    cout<<"a : "<<a<<endl<<endl;

    incree(&b);
    cout<<"b : "<<b<<endl;

    

    return 0;
}

