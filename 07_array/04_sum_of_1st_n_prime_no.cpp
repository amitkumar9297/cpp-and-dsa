#include<iostream>
using namespace std;

class Psum
{
    private:
    int arr[10],sum=0,flag=1;
    public:
    void setdata()
    {
        cout<<"enter any 10 elements"<<endl;
        for(int i=0;i<10;i++)
        {
            cin>>arr[i];
        }
    }
    void prime()
    {
        for(int i=0;i<10;i++)
        {
            if(arr[i]!=1 && arr[i]!=0 && arr[i]!=2)
            {
                for(int j=2;j<arr[i];j++)
                {
                    if(arr[i]%j==0)
                    {
                        flag=0;
                    }
                }
                if(flag==1)
                {
                    sum=sum+arr[i];
                }
                flag=1;
            }
        }
        cout<<"sum of first n prime no. is -->>"<<sum;
    }
};

int main()
{
    Psum psum;
    psum.setdata();
    psum.prime();
    
    return 0;
}