#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* left=NULL;
    node* right=NULL;
    node(int data)
    {
        this->data=data;
        this->left=left;
        this->right=right;
    }
};

// void insert_an_element(node* root,int data)
// {
//     node* temp=new node(data);


// }

void inorder_traversal(node* root)
{
    if(root==NULL)
    {
        return;
    }

    /* first traverse left*/
    inorder_traversal(root->left);
    cout<<root->data<<" ";
    inorder_traversal(root->right);

}

void preorder_traversal(node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder_traversal(root->left);
    preorder_traversal(root->right);
}

void postorder_traversal(node* root)
{
    if(root==NULL)
    {
        return;
    }
    postorder_traversal(root->left);
    postorder_traversal(root->right);
    cout<<root->data<<" ";
}

int32_t main()
{
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    
    cout<<"inorder traversal  ";
    inorder_traversal(root);
    cout<<endl;

    cout<<"preorder traversal ";
    preorder_traversal(root);
    cout<<endl;

    cout<<"postorder traversal ";
    postorder_traversal(root);
    cout<<endl;
    return 0;
}