#include <bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* left;
    node* right;
    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
void inorder(node* ele)
{
    if(ele==NULL)
      return;
     inorder(ele->left);
     cout<<ele->data<<" ";
     inorder(ele->right);
}
int main()
{
    node* root= new node(1);
    root->left = new node(2);
    root->right =new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
     cout << "\nInorder traversal of binary tree is \n";
    inorder(root);
    return 0;
}
