#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        int m;
        m=a[i];
        int t,sum=0;
        while(m>0)
        {
            t=m%10;
            sum=sum*10 + t;
            m=m/10;
        }
        cout<<sum<<"\t";
    }
   
    return 0;
}