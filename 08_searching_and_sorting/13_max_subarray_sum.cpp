// comulative sum approach



#include<bits/stdc++.h>
using namespace std;
#include<climits>

int main()
{
    int n;
    cout<<"how many element are you want to enter";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }

    int current_sum[n+1];
    current_sum[0]=0;

    for(int i=1;i<=n;i++)
    {
        current_sum[i]=current_sum[i-1]+arr[i-1];
        
    }

    int max_sum=INT_MIN;
    for(int i=1;i<=n;i++)
    {
        int sum=0;
        {
            for(int j=0;j<i;j++)
            {
                sum=current_sum[i]-current_sum[j];
                max_sum=max(sum,max_sum);
            }
        }
    }

    cout<<max_sum;



    return 0;
}