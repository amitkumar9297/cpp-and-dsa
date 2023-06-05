#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void Insert_At_Tail(node* &head,int val)
{


    node* n = new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp = head;
    while(temp->next !=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;

}

void Insert_At_Head(node* &head,int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;
}

void display(node* head)
{
    
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
}

int32_t main()
{
    node* head=NULL; 
    Insert_At_Tail(head,1);
    Insert_At_Tail(head,2);
    display(head);
    Insert_At_Head(head,5);
    display(head);
    
    return 0;
}