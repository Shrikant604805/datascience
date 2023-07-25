#include<iostream>
using namespace std;

int getbit(int n, int k)
{
    return (n&(1<<k)!=0);
}
int setbit(int n, int k)
{
    return (n | (1<<k));
}
int clearbit(int n, int k)
{
    int max = ~(1<<k);
    return (n & max);
}

int main()
{
    int n,k;
    cin>>n>>k;
    cout<<getbit(n,k)<<endl;
    cout<<setbit(n,k)<<endl;
    cout<<clearbit(n,k)<<endl;

    return 0;
}