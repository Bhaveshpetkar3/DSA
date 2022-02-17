#include <iostream>
using namespace std;
#define MAX 1000
class Stack
{
    int top;
    public:
    int arr[MAX];
    Stack(){top=-1;}
    bool push(int a);
    int pop();
    int peek();
    bool isEmpty();
};
bool Stack::isEmpty()
{
   return (top<0);
}
bool Stack::push(int a)
{
    if(top>=MAX-1)
    {
    cout<<"\nStack overflow";
    return false;
    }
    arr[++top]=a;
    cout << a << " pushed into stack\n";
    return true;
}
int Stack::pop()
{
    if(top<0)
    {
        cout<<"\nStack underflow";
        return 0;
    }
    int x=arr[top--];
    return x;
}
int Stack::peek()
{
    if(top<0)
    {
        cout<<"\nEmpty Stack ! ";
        return 0;
    }
    return arr[top];
}
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << " Popped from stack\n";
    cout<<"Elements present in stack : ";
    while(!s.isEmpty())
    {
        cout<<s.peek()<<" ";
        
        s.pop();
    }

    return 0;
}
