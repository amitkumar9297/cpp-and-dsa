#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter a no. for printing diamond pattern";
    cin>>n;

    for(int row=1;row<=n;row++)
    {
        for(int space=n-row;space>=1;space--)
        {
            cout<<"  ";
        }
        for(int star=1;star<=row*2-1;star++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }
    //int dec=1;

    for(int row=1;row<=n;row++)
    {

        for(int space=1;space<row;space++)
        {
            cout<<"  ";
        }
        
        for(int star=2*n-2*row+1;star>=1;star--) //or for(int star=2*n-dec;star>=1;star--)
        {
            cout<<"* ";
        }
        //dec=dec+2;        
        cout<<endl;

    }




    return 0;
}