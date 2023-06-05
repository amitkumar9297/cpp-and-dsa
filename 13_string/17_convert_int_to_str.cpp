#include<iostream>
using namespace std;

#include<string>

int main()
{
    int s1;
    cout<<"enter the string for calculating the length of entered string"<<endl;
    cin>>s1;
    cout<<to_string(s1)<<endl;

    cout<<"size of string  "<<sizeof(to_string(s1));
    return 0;
}