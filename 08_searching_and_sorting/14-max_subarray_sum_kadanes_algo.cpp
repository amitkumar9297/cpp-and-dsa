// kadane's algorithm

#include<iostream>
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
    int current_sum=0;
    int max_sum=INT_MIN;

    for(int i=0;i<n;i++)
    {
        current_sum+=arr[i];
        if(current_sum<0)
        {
            current_sum=0;
        }
        max_sum=max(max_sum,current_sum);
    }
    cout<<max_sum;


    return 0;
}