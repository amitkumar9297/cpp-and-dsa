#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    
    ineligible:
        cout<<"you are not eligibal for voting";
    
    int age;
    cout<<"enter your age for checking you are eligible or not for voting : ";
    cin>>age;
    if(age<18)
    {
        goto ineligible;
    
    }
    else
    {
        cout<<" you are eligible for voting! ";
    }

    return 0;
}