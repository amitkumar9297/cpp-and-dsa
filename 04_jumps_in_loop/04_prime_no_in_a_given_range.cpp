//print the prime no. in given range

#include<iostream>
using namespace std;

int main()
{
    int num1,num2,i;
    cin>>num1;
    cin>>num2;


    cout<<"the prime numbers are given below :"<<endl;
     for(num1;num1<=num2;num1++)
     {
        for(i=2;i<num1;i++)
        {
            if(num1%i==0)
            {
                break;
            }
            
        }
        if(i==num1)
        {
            cout<<num1<<endl;
        }

     }


    return 0;

}