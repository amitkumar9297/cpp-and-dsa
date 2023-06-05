#include<iostream>
using namespace std;

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

    int target;

    cout<<"enter which sum are you want ";
    cin>>target;

    
    for(int i=0;i<n;i++)
    {
        int sin=0;
        int sum=arr[i];
        for(int j=1;j<n-1;j++)
        {
            if(i!=j)
            {
                sum+=arr[j];
                if(sum==target)
                {
                    cout<<i<<" "<<j<<endl;
                    break;

                }
            }
            if(sin==target)
            {
                
                cout<<i<<endl;
                break;
            }
        }
        
    }

    return 0;
}