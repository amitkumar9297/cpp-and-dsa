/*
1
11
121
1331
14641
*/

// print the above pascal triangle

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter a number :";

    cin>>n;
    int factorial(int);

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            
            cout<<factorial(i)/(factorial(i-j)*factorial(j))<<"\t";
        }
        cout<<endl<<endl;
    }


    return 0;
}
int factorial(int num)
{

    int fact=1;
    
    for(int i=2;i<=num;i++)
    {
        fact=fact*i;
    }
    return fact;

}