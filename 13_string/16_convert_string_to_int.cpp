#include<iostream>
using namespace std;

#include<string>

int main()
{
    string s1;
    cout<<"enter the string for calculating the length of entered string"<<endl;
    getline(cin,s1);
    cout<<stoi(s1)<<endl;

    cout<<"size of integer  "<<sizeof(stoi(s1));
    return 0;
}