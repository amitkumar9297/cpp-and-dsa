#include<bits/stdc++.h>
using namespace std;

#include<string>
#include<algorithm>

int32_t main()
{
    string str;
    cout<<"\n enter a string for counting a character that repeats maximum times\n"<<endl;
    getline(cin,str);
    int n=str.length();
    
    int frequency[26];

    for(int i=0;i<26;i++)
    {
        frequency[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        frequency[str[i]-'a']++;

    }
    char ans='a';
    int max_frequency=0;

    for(int i=0;i<26;i++)
    {
        if(frequency[i]> max_frequency)
        {
            max_frequency=frequency[i];
            ans=i+'a';
        }
    }

    cout<<max_frequency<<"  "<<ans<<endl;
    
    return 0;
}