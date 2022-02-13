#include <iostream>
using namespace std;
void winnercal(int n)
{
    int lead,lead_max=0,w,p1_total=0,p2_total=0;
    while(n--)
    {
        int p1,p2;
        cin>>p1>>p2;
        p1_total=p1_total+p1;
        p2_total=p2_total+p2;
        if(p1_total>p2_total)
        {
            lead=p1_total-p2_total;
        }
        else
        {
            lead=p2_total-p1_total;
        }
        if(lead>lead_max)
        {
            lead_max=lead;
            if(p1_total>p2_total)
            {
                w=1;
            }
            else
            {
                w=2;
            }
        }
        lead=0;
    }
    cout<<w<<" "<<lead_max;
}
int main()
{
    int n;
    cin>>n;
    winnercal(n);
}