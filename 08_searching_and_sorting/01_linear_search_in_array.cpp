#include<iostream>
using namespace std;

int linear_search(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if (arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n,key;
    cout<<"how many elements are you enter in an array";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)            //inserting elemnts in array
    {
        cin>>arr[i];
    }

    cout<<"which no. are you want to search";
    cin>>key;

    cout<<linear_search(arr,n,key);

    return 0;
}