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
    cout<<"Enter the Element: ";
    cin>>b;
    node* new_element=new node();
    new_element->data=b;
        if(*head_ref == NULL)
        {
            new_element->next=NULL;
           *head_ref=new_element;
        }
        else
        {
            node* abc=*head_ref;
            while(abc->next!= NULL)
            {
                abc=abc->next;
            }
            abc->next=new_element;
            new_element->next=NULL;
        }

}
void print_list(node* head_ref)
{
     node* asd=head_ref;
     while(asd!=NULL)
     {
         cout<<asd->data<<"->";
         asd=asd->next;
     }
     cout<<"NULL";
}
int main()
{
    node* head=new node();
    head=NULL;
    int n;
    cout<<"How many elements do you want to insert into your linked list ? ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        insert_node(&head);
    }
    print_list(head);


    return 0;
}
