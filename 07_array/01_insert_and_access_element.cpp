#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter how many element are you want to enter"<<endl;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }


    return 0;
}

