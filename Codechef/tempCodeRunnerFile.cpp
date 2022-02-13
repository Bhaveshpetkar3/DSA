#include <iostream>
using namespace std;
void soln(string str)
{
    int size=strlen(s);
    int left[26]={0};
    int right[26]={0};
    if(n%2)
    {
        for(int i=0;i<n/2;i++)
        {
            int n=str[i];
            left[n-97]++;
        }
        for(int j=(n/2)+1;j<n;j++)
        {
            int g=str[j];
            left[g-97]++;
        }
        for(int a=0;a<26;a++)
        {
            if(left[a]!=right[a])
            {
                cout<<"no";
                return;
            }
        }
        cout<<"YES";
    }
    else{
        for(int i=0;i<n/2;i++)
        {
            int q=str[i];
            right[q-97]++;
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
                cout<<"no";
                return;
            }
        }
        cout<<"YES"
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