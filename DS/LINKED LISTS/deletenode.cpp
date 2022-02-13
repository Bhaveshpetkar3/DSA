#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
};
void insert_node(node** head_ref)
{
    int b;
    cout<<"Enter the data of the node ";
    cin>>b;
    node* new_node=new node();
    new_node->data=b;
    new_node->next=NULL;
    if(*head_ref == NULL)
    {
        *head_ref=new_node;
    }
    else
    {
    node* asd=*head_ref;
    while(asd->next!=NULL)
    {
        asd=asd->next;
    }
    asd->next=new_node;

    }
}
void delete_node(node** head_ref,int f)
{
    node* qwe=*head_ref;
    node*zxc=new node();
    if(qwe!=NULL &&  qwe->data==f)
    {
        *head_ref=qwe->next;
        delete qwe;
        return;
    }
    while(qwe!=NULL && qwe->data!=f)
    {
        zxc=qwe;
        qwe=qwe->next;
    }
    if(qwe==NULL)
    {
        cout<<"The given element was not present in the linked list\n";
        return;
    }
    
    zxc->next=qwe->next;
    delete qwe;
}
void print_list(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL";
}
int main()
{
    node* head;
    head=NULL;
    int  n;
    cout<<"How many nodes in the linked list ? ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        insert_node(&head);
    }
    cout<<"Linked List before deletion :\n";
    print_list(head);
    int r;
    cout<<"\nEnter the data which you want to delete";
    cin>>r;
    delete_node(&head,r);
    cout<<"\nLinked List after deletion :\n";
    print_list(head);
    return 0;
}