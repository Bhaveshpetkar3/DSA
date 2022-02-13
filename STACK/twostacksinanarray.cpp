#include<iostream>
using namespace std;
#define MAX 10
class Stack
{
    int top1,top2;
    public:
    int arr[MAX];
    Stack()
    {
        top1=-1;
        top2=(MAX/2)-1;
    }
    int top1_max=(MAX/2)-1;
    int top2_max=MAX-1;
    void push1(int e1);
    void push2(int e2);
    void pop1();
    void pop2();
    bool isEmpty1();
    bool isEmpty2();
    int peek1();
    int peek2();
    void display();
};
bool Stack::isEmpty1()
{
    return (top1<0);
}
bool Stack::isEmpty2()
{
    return (top2<(MAX/2));
}
void Stack::push1(int e1)
{
    while(e1!=0)
    {
    if(top1>=top1_max)
    {
        cout<<"\nStack 1 overflow ! ";

    }
    int a;
    cin>>a;
    arr[++top1]=a;
    e1--;
    }
}
void Stack::push2(int e2)
{
    while(e2!=0)
    {
    if(top2>=top2_max)
    {
        cout<<"\nStack 2 overflow !";
        return;
    }
    int b;
    cin>>b;
    arr[++top2]=b;
    e2--;
    }
}
void Stack::pop1()
{
    if(isEmpty1())
    {
        cout<<"\nStack 1 underflow ! ";
        return;
    }
    arr[top1--];
}
void Stack::pop2()
{
    if(isEmpty2())
    {
        cout<<"\nStack 2 underflow !";
        return;
    }
    arr[top2--];
}
int Stack::peek1()
{
    if(isEmpty1())
    {
        cout<<"\nStack 1 is Empty !";
        return 0;
    }
    return arr[top1];
}
int Stack::peek2()
{
    if(isEmpty2())
    {
        cout<<"\nStack 2 is empty !";
        return 0;
    }
    return arr[top2];
}
void Stack::display()
{
    cout<<"\n";
    for(int j=0;j<10;j++)
    {
        cout<<arr[j]<<" ";
    }
}
int main()
{
    Stack s1;
    int e1=0,e2=0;
    cout<<"\nHow many elements in s1 ? ";
    cin>>e1;
    cout<<"\nEnter the elements to be inserted into stack 1 : ";
    s1.push1(e1);
    cout<<"\nHow many elements in s2 ? ";
    cin>>e2;
    cout<<"\nEnter the elements to be inserted into stack 2 : ";
    s1.push2(e2);
    cout<<"\nThe Entered elements in s1 are : ";
    while(!s1.isEmpty1())
    {
        cout<<s1.peek1()<<" ";
        s1.pop1();
    }
    cout<<"\nThe Entered elements in s2 are : ";
    while(!s1.isEmpty2())
    {
        cout<<s1.peek2()<<" ";
        s1.pop2();
    }
    s1.display();
    return 0;

}
