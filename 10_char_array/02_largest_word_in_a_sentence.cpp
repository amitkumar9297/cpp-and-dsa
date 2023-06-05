// found maximum length of word in a sentence

#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    int n;
    cout<<"enter how much word in your sentence: "<<endl;
    cin>>n;
    
    char arr[n+1];
    cout<<"enter the sentence : "<<endl;
    cin.getline(arr,n);
    cin.ignore();

    int count=0;
    int max_len=0;
    int i=0;

    while(1)
    {
        if(arr[i] == ' ' || arr[i] == '\0')
        {
            if(count>max_len)
            {
                max_len=count;
                cout<<max_len;
            }
            count=0;
        }
        else
        {
            count=count+1;
        }
        if(arr[i]=='\0')
        {
            break;
        }
        i++;
    }
    cout<<max_len;


    return 0;
}