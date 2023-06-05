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

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    
    return 0;
}