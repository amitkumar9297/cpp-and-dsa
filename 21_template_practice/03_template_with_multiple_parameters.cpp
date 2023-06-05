#include<bits/stdc++.h>
using namespace std;

template<class T,class U>
class Sum
{
    public:
    T dig1;
    U dig2;
    Sum()
    {
        cout<<"enter the digits ";
        cin>>dig1>>dig2;
        cout<<"the sum of the digits is "<<dig1+dig2<<endl;
    }
};

int32_t main()
{
    Sum<int,float> sum;
    sum;
    Sum<float,float> sum1;
    sum1;
    
    return 0;
}