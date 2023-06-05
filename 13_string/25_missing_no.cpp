#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    char arr[11];
    int n;
    int flag=0;
    cout<<"how many element are you enter";
    cin>>n;
    cin>>arr;
    
    for(int i=48;i<58;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j]==char(i))
            {
                flag=1;
                break;
            }
        }

        if(flag==0)
        {
            cout<<char(i)<<endl;
        }
        flag=0;
    }


    return 0;
}