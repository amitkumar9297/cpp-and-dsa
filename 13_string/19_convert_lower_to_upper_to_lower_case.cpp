#include<bits/stdc++.h>
using namespace std;

#include<string>

int32_t main()
{
    string str;
    cout<<" \n \n enter a string for converting lower to upper case and upper to lower case character \n \n"<<endl;
    getline(cin,str);

    // CONVERT INTO UPPER CASE
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]-=32;
        }
    }
    cout<<"\n \n"<<str<<endl;

    //CONVERT INTO LOWER CASE
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]+=32;
        }
    }

    
    cout<<"\n \n"<<str;

    return 0;
}