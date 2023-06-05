#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    // CHECK PALINDROME

    int n;
    cout<<"how many words are you enter";
    cin>>n;

    char arr[n+1];
    cout<<"please enter your words";
    cin>>arr;

    bool check=1;

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[n-1-i])
        {
            check=0;
            break;

        }
        
    }
    if(check==true)
    {
        cout<<"it's a palindrome";
    }
    else
    {
        cout<<"it's not a pallindrome";
    }

}