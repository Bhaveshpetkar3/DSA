#include <iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
};
void insert_node(node** head_ref)
{
    node* new_element=new node();
    int a;
    cout<<"\nEnter the element :";
    cin>>a;
    new_element->data=a;
    new_element->next=NULL;
    node *qwe=*head_ref;
    if(qwe==NULL)
    {
        *head_ref=new_element;
        return;
    }
    while(qwe->next!=NULL)
    {
        qwe=qwe->next;
    }
    qwe->next=new_element;
}
void print_list(node* head_ref)
{
    while(head_ref!=NULL)
    {
        cout<<head_ref->data<<"->";
        head_ref=head_ref->next;
    }
    cout<<"NULL";
}
void insertnode(node** head_ref,int p)
{
    node* new_element=new node();
    node* zxc=new node();
    int a;
    cout<<"\nEnter the data of the new node : ";
    cin>>a;
    new_element->data=a;
    node* qwe=*head_ref;
    if(qwe!=NULL && p==0)
    {
        new_element->next=qwe;
        *head_ref=new_element;
        return;
    }
    int s=1;
    zxc=qwe;
    qwe=qwe->next;
    while(qwe!=NULL  && s!=p)
    {
        zxc=qwe;
        qwe=qwe->next;
        s++;
    }
    if(qwe==NULL)
    {
        cout<<"\nNot Possible ! ";
        return;
    }
    zxc->next=new_element;
    new_element->next=qwe;
}
int main()
{
    node* head;
    head=NULL;
    cout<<"How many elements in the list ? ";
    int b;
    cin>>b;
    for(int i=0;i<b;i++)
    {
       insert_node(&head);
    }
    cout<<"\nLinked list before insertion :";
    print_list(head);
    int o;
    cout<<"\nEnter the position at which you want to insert new node : ";
    cin>>o;
    insertnode(&head,o);
    cout<<"\nLinked list after insertion : ";
    print_list(head);
}