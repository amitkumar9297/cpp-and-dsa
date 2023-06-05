#include<bits/stdc++.h>
using namespace std;

class Add
{
    private:
    int arr[10];
    friend void sum(Add);
    public:
    Add()
    {
        for(int i=0;i<10;i++)
        {
            cin>>arr[i];
        }
    }

};
void sum(Add a)
{
    int total=0;
    for(int i=0;i<10;i++)
    {
        total=total+a.arr[i];
    }
    cout<<total;
}

int32_t main()
{
    Add s;
    s;
    sum(s);

    
    return 0;
}