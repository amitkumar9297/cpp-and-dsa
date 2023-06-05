#include<iostream>
using namespace std;

#include<string>

int main()
{
    string s1;
    cout<<"enter the string for printing in vertical order";
    getline(cin,s1);

    for(int i=0;i<s1.length();i++)
    {
        cout<<s1[i]<<endl;
    }
    return 0;
}