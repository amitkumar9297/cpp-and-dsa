#include<iostream>
using namespace std;

#include<string>

int main()
{
    string s1="nincompoop";
    cout<<s1<<endl;

    s1.erase(3,2);      // erase(x,y)  x shows where to start erasing,,, y shows how many words remove

    cout<<"after erasing  : "<<s1<<endl;


    return 0;
}