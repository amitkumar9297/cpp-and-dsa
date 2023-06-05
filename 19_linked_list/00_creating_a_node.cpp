#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    // constructor
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }

};

int32_t main()
{
    Node* n1=new Node(8);
    cout<<n1->data<<endl<<n1->next;
    
    return 0;
}