#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
};
void insertnode(node** head)
{
    int n;
    cout<<"\nEnter the LL data : ";
    cin>>n;
    node* new_node=new node();
    new_node->data=n;
    new_node->next=NULL;
    if(*head==NULL)
    {
        *head=new_node;
        return;
    }
    node* asd=*head;
    while(asd->next!=NULL)
    {
        asd=asd->next;
    }
    asd->next=new_node;
}
void revertLL(node** head)
{
    node *current,*prev,*next_node;
    prev=NULL;
    current=*head;
    while(current!=NULL)
    {
        next_node=current->next;
        current->next=prev;
        prev=current;
        current=next_node;
    }
    *head=prev;
}
void printlist(node* head)
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
    node* head=new node();
    head=NULL;
    int n;
    cout<<"\nEnter the size of the linked list : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        insertnode(&head);
    }
    cout<<"\nLL b4 reversion : ";
    printlist(head);
    revertLL(&head);
    cout<<"\nLL after reversion : ";
    printlist(head);
    return 0;
    
}