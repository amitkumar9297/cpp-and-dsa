#include<bits/stdc++.h>
using namespace std;

struct rectangle
{
    int length;
    int breadth;

    rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    void area_of_rectangle()
    {
        cout<<" Area of rectanle :"<<length*breadth<<endl;
    }
};

int32_t main()
{
    struct rectangle rec = rectangle(5,19);
    rec.area_of_rectangle();


    return 0;
}