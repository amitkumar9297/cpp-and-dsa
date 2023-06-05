#include<bits/stdc++.h>
using namespace std;

#include<string>
#include<algorithm>


int32_t main()
{
    string str;
    cout<<"\n enter a numeric string to find greatest numeric no. \n "<<endl;
    getline(cin,str);

    sort(str.begin(),str.end(), greater<int>());
    cout<<str<<endl;

    
    return 0;
}