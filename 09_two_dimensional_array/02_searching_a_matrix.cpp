#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"enter how many elments are you enter in a column and row"<<endl;
    cout<<"enter haow many elements are you enter in a column";
    cin>>n;
    cout<<"enter how many elments are you enter in a row";
    cin>>m;

    int arr[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int key;
    cout<<"enter which number are you want to search in array";
    cin>>key;

    bool flag=false;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==key)
            {
                cout<<arr[i][j]<<"   at index  "<<i<<","<<j<<endl;
                flag=true;
            }
        }
    }

    if(flag==true)
    {
        cout<<"element are found"<<endl;
    }
    else
    {
        cout<<"element are not found";
    }
    return 0;
}