#include <bits/stdc++.h>
using namespace std;

void putatthebottom(stack <int>& st,int k)
{
    if(st.empty())
    {
        st.push(k);
        return;
    }
    int temp=st.top();
    st.pop();
    putatthebottom(st,k);
    st.push(temp);
}
void reverse_stack(stack <int>& st)
{
    if(st.empty())
    {
        return;
    }
    int temp=st.top();
    st.pop();
    reverse_stack(st);
    putatthebottom(st,temp);
    return;
}
void printstack(stack <int>& st)
{
    if(st.empty())
    {
        return;
    }
    cout<<st.top()<<" ";
    int temp=st.top();
    st.pop();
    printstack(st);
    st.push(temp);
}
int main()
{
    stack <int> st;
    int n,i;
    cout<<"\nEnter the number of elements in the stack : ";
    cin>>n;
    cout<<"\nEnter the elements : ";
    for(i=1;i<=n;i++)
    {
        int t;
        cin>>t;
        st.push(t);
    }
    cout<<"\nStack b4 the reversal is : ";
    printstack(st);
    cout<<"\nStack after reversal is : ";
    reverse_stack(st);
    printstack(st);
    return 0;
}
