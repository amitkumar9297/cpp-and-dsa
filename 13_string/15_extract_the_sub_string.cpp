#include<iostream>
using namespace std;

#include<string>

int main()
{
    string s1;
    cout<<"enter the string for calculating the length of entered string"<<endl;
    getline(cin,s1);

    cout<<s1.substr(4,6);    // substr(x,y),, x represent position where to start,, y represent how many word acess

    return 0;
}