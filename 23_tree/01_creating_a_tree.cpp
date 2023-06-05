#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;
    node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
// void newnode(int data)
// {

// }
void printnode(node* n)
{
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n=n->left;
    }
    cout<<endl;
}

int32_t main()
{
    node *root=new node(1);
    root->left=new node(2);
    root->left->left=new node(3);
    printnode(root);
    
    return 0;
}