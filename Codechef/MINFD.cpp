#include<iostream>
#include<algorithm>
#define MAX 100001
using namespace std;
void cal(int arr[],int n,int x)
{
    int sum=0,i=n-1,dep_open=0,s=0;
    while(i>=0 && sum<x)
    {
        sum=sum+arr[i];
        i--;
        dep_open++;
    }
    if(sum<x)
    {
        cout<<"-1"<<"\n";
        return;
    }
    cout<<dep_open<<"\n";    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int i=0;
        int arr[n];
        while(i<n)
        {
            cin>>arr[i];
            i++;
        }
        sort(arr,arr+n);
        cal(arr,n,x);
    }
    return 0;
}