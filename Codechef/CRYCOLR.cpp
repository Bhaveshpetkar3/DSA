#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	       int n,i=0;
	       cin>>n;
	       int arr[9];
	       while(i<9)
	       {
	              cin>>arr[i];
	              i++;
	       }
	       int t=((n-arr[0])+(n-arr[4])+(n-arr[8]));
	       cout<<(t/2)<<"\n";
	}
	return 0;
}
