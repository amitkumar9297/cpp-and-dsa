#include<iostream>
using namespace std;

int main()
{
    cout<<"enter a no. for printing inverted pyramid";
    
    int n,m;
    m=1;
    cin>>n;

    for(int i=n;i>0;i--)
    {
        for(int j=1; j<i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=m;k++)
        {
            cout<<"*";
          
        }
        if(m<=n)
        {
             m=m+1;

        }
         


        cout<<endl;

        
    }


    return 0;
}