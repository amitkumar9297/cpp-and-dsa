#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
    int ans=0;

    for(int i=1;i<=n;i++)
    {
        ans=ans+i;
    }
    return ans;
}

int32_t main()
{
    int n;
    cout<<"enter a no. :";
    cin>>n;

    cout<< sum(n)<<endl;

}
