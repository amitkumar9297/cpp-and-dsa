#include<iostream>
using namespace std;
#include<cmath>

int main()
{
    int n;
    cout<<"enter  a value for checking prime or not";
    cin>>n;
    bool flag=0;

    for(int check=2;check<sqrt(n);check++)
    {
        if(n%check==0)
        {
        cout<<"not prime"<<endl;
        flag=1;
        break;            
        }

    }
    if(flag==0)
    {
        cout<<"prime";
    }
    return 0;
}