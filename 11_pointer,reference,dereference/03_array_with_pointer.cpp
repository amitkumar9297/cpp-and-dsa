#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    int arr[3]={10,20,30};
    int *ptr=arr;
    for(int i=0;i<3;i++)
    {
        cout<<*ptr<<endl;
        ptr++;                     // increment the memory address with respect to size of the data type

    }
    // means size of int is 4 so memory address updated by 4 byte
    //------>>>>>         OR

    for(int i=0;i<3;i++)
    {
        cout<<*(arr+i)<<endl;
    }



    return 0;
}
// means size of int is 4 so memory address updated by 4 byte