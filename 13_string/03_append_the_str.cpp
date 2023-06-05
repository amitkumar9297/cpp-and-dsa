#include<iostream>
using namespace std;

#include<string>

int main()
{
    string s1,s2;
    cout<<"enter something";
    getline(cin,s1);
    getline(cin,s2);
    s1.append(s2);
    cout<<s1;


}