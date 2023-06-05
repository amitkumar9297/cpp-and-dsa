#include<bits/stdc++.h>
using namespace std;

class Print_N_Time
{
    private:
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
        print(n,s);

    }

    void print(int n, string s)
    {
        if(n==0)
        {
            return;
        }
        cout<<s<<endl;
        print(n-1,s);
    }
};

int32_t main()
{
    Print_N_Time pnt;
    pnt;
    
    return 0;
}