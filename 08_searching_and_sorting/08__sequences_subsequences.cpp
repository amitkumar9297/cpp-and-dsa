#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"how many element are you want to enter";
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
    cout<<endl;
    int curr=0;

    for(int i=0;i<n;i++)
    {
      curr=0;
        for(int j=i;j<n;j++)
        {
            curr=curr+arr[j];
            cout<<curr<<" ";
        }
        cout<<endl;
        
    }

    return 0;

}