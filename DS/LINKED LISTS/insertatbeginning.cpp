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
    node* new_node=new node();
    int b;
    cout<<"Enter the elment which you want to install in your Linked List : ";
    cin>>b;
    new_node->data=b;
    new_node->next=*head_ref;
    *head_ref=new_node;
}
void print_list(node*  head_ref)
{
  while(head_ref!=NULL)

  {
      cout<<head_ref->data<<"->";
      head_ref=head_ref->next;
  }
  cout<<"NULL";
}
int main()
{
    node* head=new node();
    head=NULL;
    cout<<"How many elements do you want to insert in your linked list ? ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        insert_node(&head);
    }
    print_list(head);
}

