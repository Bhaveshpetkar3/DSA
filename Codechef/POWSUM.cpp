#include <iostream>
#include <algorithm>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long s=0,p=1;
        int n;
        cin>>n;
        int arr[n];
        for(int h=0;h<n;h++)
        {
            cin>>arr[h];
        }
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            s+=arr[i];
        }
        if(ceil(log2(s))== floor(log2(s)))
	{
		cout<<0<<endl;

	}
    else
    {
        while(p<s)
        {
             p=p*2;
        }
        
        cout<<1<<" "<<(p-s+arr[0])/arr[0]<<"\n";
        cout<<arr[0]<<"\n";
    }
    }
    return 0;
}