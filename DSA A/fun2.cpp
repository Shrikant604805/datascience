#include<iostream>
using namespace std;

int fact(int num)
{
    int ans=1;
    for(int i=2;i<=num;i++)
    {
        ans=ans*i;
    }
    return ans;
}

int main()
{
    int n,r;
    cin>>n>>r;

    int ans= fact(n)/(fact(r)*fact(n-r));
    cout<<ans;
    return 0;
}