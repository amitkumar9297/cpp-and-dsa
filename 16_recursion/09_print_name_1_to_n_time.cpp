#include<bits/stdc++.h>
using namespace std;

class Print_N_Time
{
    private:
    int i=0;
    int n;
    string s;
    public:
    Print_N_Time()
    {
        cout<<"enter your name ";
        getline(cin,s);
        cin.ignore();
        cout<<"how many time are you print your name ";
        cin>>n;
        print(i,n,s);

    }

    void print(int i,int n, string s)
    {
        if(i==n)
        {
            return;
        }
        cout<<s<<endl;
        print(i+1,n,s);
    }
};

int32_t main()
{
    Print_N_Time pnt;
    pnt;
    
    return 0;
}