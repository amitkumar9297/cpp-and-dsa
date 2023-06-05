#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"please enter a no. for printing inverted numeric pattern :";
    cin>>n;

    for(int i=n;i>=1;i--)
    {
        m=1;
        for(int j=i;j>=1;j--)
        {
            cout<<m<<" ";
            m=m+1;
        }
        cout<<endl;
    }


    return 0;
}