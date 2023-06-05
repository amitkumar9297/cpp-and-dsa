#include<bits/stdc++.h>
using namespace std;

int dec(int n)
{
    if(n==0)
    {
        return 0;
    }
    cout<<n<<endl;
    return dec(n-1);
}

int32_t main()
{
    int n;
    cout<<"please enter a no. to print 1 to  till n in decreasing order :";
    cin>>n;

    dec(n);

    return 0;
}