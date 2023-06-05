#include<iostream>
using namespace std;

#include<string>

int main()
{
    string s1="how you?";
    cout<<s1<<"\n please correct the sentence"<<endl;

    string s2;
    cout<<"enter the word!";
    getline(cin,s2);

    int position;
    cout<<"enter the position where insert the word"<<endl;
    cin>>position;

    s1.insert(position,s2);
    cout<<s1;

    return 0;
}