#include<iostream>
using namespace std;
#include<string>
#include<algorithm>

int32_t main()
{
    string str="hello";
    cout<<"\n \n enter string to converting lower to upper case and upper to lower case\n \n"<<endl;
    getline(cin,str);
    transform(str.begin() , str.end() , str.begin() , :: toupper);

    cout<<"\n \n"<<str<<endl;

    transform(str.begin(),str.end(),str.begin(),::tolower);
    cout<<"\n \n"<<str<<endl;


    return 0;
}