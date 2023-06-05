#include<bits/stdc++.h>
using namespace std;


void inc(int n)
{
    if(n==1)
    {
        cout<<"1"<<endl;
        return;
    }
    
    inc(n-1);
    cout<<n<<endl;
}

int32_t main()
{
    int n;
    cout<<"please enter a no. to print 1 to  till n in decreasing order :";
    cin>>n;
    inc(n);

    return 0;
}