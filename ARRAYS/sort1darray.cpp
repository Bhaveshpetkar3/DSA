#include <iostream>
using namespace std;
void sort_array(int arr[],int n)
{
    int j,i,temp;
    for(j=n;j>0;j--)
    {
        for(i=0;i<j-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    cout<<"\nThe sorted array is :\n";
    for(int u=0;u<n;u++)
    {
        cout<<arr[u]<<" ";
    }
}
int main()
{
    int a;
    cout<<"\nEnter the size of your array";
    cin>>a;
    int arr[a];
    cout<<"\nEnter the elements of the array :";
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }
    sort_array(arr,a);
}