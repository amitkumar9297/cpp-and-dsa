#include<iostream>
using namespace std;

bool palindrome(char arr[],int n,int i)
{
    if(i==n-i-1)
    {
        return true;
    }
    if(arr[i]!=arr[n-i-1])
    {
        return false;
    }
    palindrome(arr,n,i+1);
}

int main()
{
    int n;
    cout<<"how many element are you want to enter : ";
    cin>>n;

    char arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    cout<<palindrome(arr,n,0);

    return 0;
}
