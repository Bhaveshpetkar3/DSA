#include <iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
};
bool isEmpty(node* root)
{
    return (root==NULL);
}
int push(node** root_ref,int w)
{
    node* asd=new node();
    asd->data=w;
    asd->next=*root_ref;
    *root_ref=asd;
    cout<<w<<" pushed into stack\n";
}
int pop(node** root_ref)
{
    if(isEmpty(*root_ref))
    {
        cout<<"\nStack underflow !!!";
        return 0;
    }
    node *temp=*root_ref;
    *root_ref=(*root_ref)->next;
    int popped=temp->data;
    free(temp);
    return popped;
}
int peek(node* root_ref)
{
    if(isEmpty(root_ref))
    {
        cout<<"\nStack is Empty !!!";
        return 0;
    }
    return root_ref->data;
}

int main()
{
    node *root;
    root = NULL;
    push(&root,10);
    push(&root,20);
    push(&root,30);
    cout<<pop(&root)<<" popped from the stack\n";
    cout<<"\nElements present in the stack :\n";
    while(!isEmpty(root))
    {
        cout<<peek(root)<<" ";
        pop(&root);
    }
    return 0;
}
