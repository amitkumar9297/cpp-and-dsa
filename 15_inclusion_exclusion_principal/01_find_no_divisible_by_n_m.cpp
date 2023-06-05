/*
how many no. are divisible by 5 or 7 in range 1 to 1000,,,,,,do'not count the no. that divided by both the no. 5 or 7

like a number 35 that divide by 5 and 7 also

in the range of 1 to 1000,, there are many no. that divided by both the no.
for example--->>> 35,70,105,140,175 etc..

the type of no. cannot be count 

*/

#include<bits/stdc++.h>
using namespace std;

int divisible(int n,int a,int b)
{
    int c1=n/a;
    int c2=n/b;

    int c3=n/(a*b);
    return c1+c2-c3;
}

int32_t main()
{
    int n,a,b;

    cin>>n>>a>>b;
    cout<<divisible(n,a,b);
    
    return 0;
}