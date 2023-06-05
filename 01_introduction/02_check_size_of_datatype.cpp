#include<iostream>
using namespace std;

int main()
{
    int a;  //declaration
    a=5;   //intialization
    cout << " size of integer :" << sizeof(a) << endl;


    float b;
    b=5.487;
    cout << "\n size of float :" << sizeof(b)<< endl;

    char c;
    c='a';
    cout << "\n size of char :" << sizeof(c)<<endl;


    bool d;
    cout << "\n size of bool :" << sizeof(d)<<endl;

    short int si;
    long int li;
    cout<<"size of short int :"<<sizeof(si)<<endl;
    cout<<"size of long int :"<<sizeof(li)<<endl;

}
