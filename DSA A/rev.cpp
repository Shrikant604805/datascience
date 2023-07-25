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
    for(int i=0;i<n/2;i++)
    {
        int temp;
        temp=a[i];
        a[i]=a[n-i];
        a[n-i]=temp;
        cout<<a[i];
    }
    return 0;
}