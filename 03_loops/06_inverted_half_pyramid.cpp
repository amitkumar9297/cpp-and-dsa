#include<iostream>
using namespace std;

int main()
{
    cout<<"enter a no. for printing inverted pyramid";
    
    int n;
    cin>>n;

    for(int i=n;i>0;i--)
    {
        for(int j=1; j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;

        
    }


    return 0;
}