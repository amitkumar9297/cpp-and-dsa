#include<iostream>
using namespace std;
#include<string>

int main()
{
    string s1;
    cout<<"enter a sentence for finding a word";

    getline(cin,s1);

    string s2;
    cout<<"enter a word which are you want to find";
    getline(cin,s2);

    cout<<s1.find(s2);
    return 0;
}