#include<bits/stdc++.h>
using namespace std;

void prime(int n)
{
    int prime[n+1]={0};
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                prime[j]=1;

            }
        }
    }

    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            cout<<i<<"  ";
        }
    }

}

int32_t main()
{
    int n;
    cout<<"enter a value to print first prime no. in given range n : "<<endl;
    cin>>n;

    prime(n);


    
    return 0;
}