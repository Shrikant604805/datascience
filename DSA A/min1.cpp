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
    int m=a[0];
    for(int i=1;i<n;i++)
    {
        if(m>a[i])
        {
            int temp;
            temp=a[i];
            a[i]=m;
            m=temp;
        }
    }
    cout<<m;
    return 0;
}