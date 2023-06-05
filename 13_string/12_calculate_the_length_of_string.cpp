#include<iostream>
using namespace std;

#include<string>

int main()
{
    string s1;
    cout<<"enter the string for calculating the length of entered string"<<endl;
    getline(cin,s1);
    
    cout<<s1.length();
    return 0;
}