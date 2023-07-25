#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1;
    cin>>s1;
    int start=0,end=s1.length();
    while(start<=end)
    {
        char t=s1[start];
        s1[start]=s1[end];
        s1[end]=t;
        start++;
        end--;
    }
    cout<<s1<<endl;
    return 0;
}