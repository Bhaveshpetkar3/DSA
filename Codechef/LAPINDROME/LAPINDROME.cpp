#include <bits/stdc++.h>
using namespace std;
void soln(string str)
{
    int n=str.size();
    int left[26]={0};
    int right[26]={0};
    if(n%2)
    {
        for(int i=0;i<n/2;i++)
        {
            int v=str[i];
            left[v-97]++;
        }
        for(int j=(n/2)+1;j<n;j++)
        {
            int g=str[j];
            right[g-97]++;
        }
        for(int a=0;a<26;a++)
        {
            if(left[a]!=right[a])
            {
                cout<<"NO\n";
                return;
            }
        }
        cout<<"YES\n";
    }
    else{
        for(int i=0;i<n/2;i++)
        {
            int q=str[i];
            left[q-97]++;
        }
        for(int j=n/2;j<n;j++)
        {
            int d=str[j];
            right[d-97]++;
        }
         for(int a=0;a<26;a++)
        {
            if(left[a]!=right[a])
            {
                cout<<"NO\n";
                return;
            }
        }
        cout<<"YES\n";
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        soln(str);
    }
}
