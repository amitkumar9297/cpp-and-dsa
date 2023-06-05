#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int info;
    Node* link;
    Node(int data)
    {
        info=data;
        link=NULL;
    }
};

void insert_at_tail(Node* &tail,int info)
{
    Node* n=new Node(info);
    tail->link=n;
    tail=n;

}

void traverse(Node* &head)
{
    if(head==NULL)
    {
        cout<<"no elements";
        return;
    }
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->info<<endl;
        temp=temp->link;
    }
}

int32_t main()
{
    Node* node1=new Node(18);
    Node* head=node1;
    Node* tail=node1;

    
    insert_at_tail(tail,10);
    insert_at_tail(tail,13);
    insert_at_tail(tail,27);
    traverse(head);
    
    return 0;
}