#include<bits/stdc++.h>
using namespace std;



class Node
{
    public:
    int info;
    Node* next;
    Node(int info)
    {
        this->info=info;
        this->next=NULL;
    }
};



void insert_at_tail(Node* &tail,int info)
{
    Node* n=new Node(info);
    tail->next=n;
    tail=n;

}



void insert_at_pos(Node* &head,Node* &tail,int pos,int info)
{

    Node* temp=head;

    if(pos==1)
    {
        Node* insert=new Node(info);
        insert->next=head;
        head=insert;
        return;
    }

    int count=1;

    while(count<pos-1)
    {
        temp=temp->next;
        count++;
    }

    if(temp->next==NULL)
    {
        insert_at_tail(tail,info);
        return;
    }

    Node* insert=new Node(info);
    insert->next=temp->next;
    temp->next=insert;
    
}



void display(Node* &head)
{
    if(head==NULL)
    {
        cout<<"there is no element";
        return;
    }
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->info<<endl;
        temp=temp->next;
    }
}



int32_t main()
{
    Node* head=NULL;

    Node* tail=new Node(3);
    head=tail;
    insert_at_tail(tail,1);
    insert_at_tail(tail,2);
    display(head);
    insert_at_pos(head,tail,1,9);
    insert_at_pos(head,tail,5,6);
    display(head);

    cout<<endl<<"head"<<head->info<<endl;
    cout<<"tail"<<tail->info<<endl;
    
    return 0;
}