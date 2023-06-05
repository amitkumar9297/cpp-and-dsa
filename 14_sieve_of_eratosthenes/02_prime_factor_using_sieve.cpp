#include<bits/stdc++.h>
using namespace std;

void primefactor(int n)
{
    int spf[n+1]={0};       // spf means smallest prime factor

    for(int i=2;i<=n;i++)
    {
        spf[i]=i;
    }
    for(int i=2;i<=n;i++)
    {
        if(spf[i]==i)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                cout<<j<<endl;
                if(spf[j]==j)
                {
                    spf[j]=i;
                }
            }
        }
    }

    while(n!=1)
    {
        cout<<spf[n]<<" ";
        n=n/spf[n];

    }
}

int32_t main()
{
    int n;
    cout<<" enter a number for finding prime factor ";
    cin>>n;

    primefactor(n);
    return 0;
}