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
    cout<<"\nEnter the element to be inserted in the list : ";
    cin>>a;
    new_element->data=a;
    new_element->next=NULL;
    if(*head_ref==NULL)
    {
        *head_ref=new_element;
        return;
    }
    node* qwe=*head_ref;
    while(qwe->next!=NULL)
    {
        qwe=qwe->next;
    }
    qwe->next=new_element;
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
void deletell(node** head_ref)
{
    node* temp=new node();
    temp=*head_ref;
    while(temp!=NULL)
    {
        *head_ref=temp->next;
        delete temp;
    }
}
int main()
{
    node* head=new node();
    head=NULL;
    int s;
    cout<<"Enter the size of the linked list : ";
    cin>>s;
    for(int i=0;i<s;i++)
    {
    insert_node(&head);
    }
    cout<<"\n";
    printlist(head);
    deletell(&head);
    cout<<"\n";
    printlist(head);
}