#include<bits/stdc++.h>
using namespace std;

template<class t>
class Vector
{
    public:
    t * arr;
    int size;
    public:
        Vector(t m)
        {
            size=m;
            arr=new t[size];

        }
        t dotproduct(Vector &v)
        {
            t d=0;
            for(int i=0;i<size;i++)
            {
                d+=this->arr[i]*v.arr[i];
                
            }
            return d;
        }
};

int32_t main()
{
    Vector<float> v1(3);
    v1.arr[0]=4.1;
    v1.arr[1]=3.1;
    v1.arr[2]=1.2;
    Vector<float> v2(3);
    v2.arr[0]=1;
    v2.arr[1]=0;
    v2.arr[2]=1;

    float a=v1.dotproduct(v2);
    cout<<a<<endl;


    return 0;
}