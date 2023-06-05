#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* prev;
    node(int data)
    {
        this->data=data;
        this->prev=NULL;
    }
};


void push(node* &top, int data)
{
    node* n=new node(data);
    n->prev=top;
    top=n;
}

void pop(node* &top)
{
    if(top==NULL)
    {
        cout<<"\nunderflow"<<endl;
    }

    cout<<top->data<<" ";
    node* cur;
    cur=top;
    top=top->prev;
    cur=NULL;
}

int32_t main()
{
    node* stack=new node(5);
    push(stack,6);
    push(stack,7);
    push(stack,2);
    pop(stack);
    pop(stack);
    push(stack,8);
    push(stack,1);
    pop(stack);
    pop(stack);
    pop(stack);
    
    return 0;
}