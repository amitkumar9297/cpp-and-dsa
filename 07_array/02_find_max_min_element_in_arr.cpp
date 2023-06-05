#include<iostream>
using namespace std;
#include<climits>
#include<cmath>

int main()
{
    int n,maxno=INT_MIN,minno=INT_MAX;
    cout<<"how many elements are you enter for finding max & min :";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }


    for(int i=0;i<n;i++)
    {
        maxno=max(maxno,arr[i]);
        minno=min(minno,arr[i]);
    }
    cout<<"max "<<maxno<<"min "<<minno<<endl;
    return 0;

}