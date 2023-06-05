#include<bits/stdc++.h>
using namespace std;
int swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;

}

int32_t main()
{
    int a=10;
    int b=20;

    swap(&a,&b);
    cout<<a<<' '<<b<<endl;

    return 0;
}