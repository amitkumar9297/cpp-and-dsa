// brute force approach


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
    int max_sum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {

            int sum=0;

            for(int k=i;k<=j;k++)
            {
                sum+=arr[k];
                //cout<<arr[k]<<" ";


            }
            //cout<<endl;
            max_sum=max(max_sum,sum);
        }

    }
    cout<<max_sum;


    return 0;

}