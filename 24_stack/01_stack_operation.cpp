// perform stack operations usi g linked list 

#include<bits/stdc++.h>
using namespace std;

class Stack
{
    private:
    int stk[10];
    int top;
    public:
    Stack()
    {
        top=-1;
    }
    void push(int data);
    int pop();
    void isfull();
    void isempty();
};

void Stack:: push(int data)
{
    if(top==-1)
    {
        top=0;
        stk[top]=data;
    }
    else if(top==100)
    {
        cout<<"overflow";
    }
    else{
        top=top+1;
        stk[top]=data;
        
    }
}

int Stack:: pop()
{
    if(top==-1)
    {
        cout<<"underflow";
    }
    else
    {
        cout<<stk[top]<<" ";
        top=top-1;
    }
}

void Stack:: isfull()
{
    if(top==10)
    {
        cout<<"stack is full "<<endl;
    }
    else
    {
        cout<<" stack is not full "<<endl;
    }
}

void Stack:: isempty()
{
    if(top==-1)
    {
        cout<<"stack is empty "<<endl;
    }
    else{
        cout<<"stack is not empty "<<endl;
    }
}

int32_t main()
{
    Stack stk;
    stk.push(5);
    stk.push(6);
    stk.push(3);
    stk.push(8);
    stk.pop();
    stk.pop();
    stk.pop();
    stk.pop();
    stk.pop();
    stk.isempty();
    stk.isfull();
    
    return 0;
}