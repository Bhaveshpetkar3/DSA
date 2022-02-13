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
        return;
    }
    node* asd=*head_ref;
    while(asd->next!=NULL)
    {
        asd=asd->next;
    }
    asd->next=new_node;
}
void delete_node(node** head_ref,int f)
{
    node* qwe=*head_ref;
    node* asd=new node();//for storing the previous node
    if(f==0 && qwe!=NULL)
    {
        *head_ref=qwe->next;
        delete qwe;
        return;
    }
    asd=qwe;
    qwe=qwe->next;
    int a=1;
    while(qwe!=NULL && a!=f)
    {
        asd=qwe;
        qwe=qwe->next;
        a++;
    }
    if(qwe==NULL)
    {
        cout<<"\nThe node does not exist";
        return;
    }
    asd->next=qwe->next;
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
    cout<<"\nEnter the position which you want to delete: ";
    cin>>r;
    delete_node(&head,r);
    cout<<"\nLinked List after deletion :\n";
    print_list(head);
    return 0;
}