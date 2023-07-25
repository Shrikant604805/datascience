#include<iostream>
using namespace std;
int palin(int a[], int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        int m=a[i];
        int sum=0;
        int t=a[i];
        while(t>0)
        {
            t=t%10;
            sum=sum*10+t;
            t=t/10;
        }
        
        if(m==sum)
        {
            count++;
        }
    }
    if(count==n)
    {
        cout<<"1";
    }
    else
    {
        cout<<"0";
    }
    
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    palin(a,n);
    return 0;
}