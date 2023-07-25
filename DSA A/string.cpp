#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    
    string s1="abcabababdvbvhbsdgshabba";
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]>='a' && s1[i]<='z')
        {
            s1[i]=s1[i]-32;
        }
    }
    cout<<s1<<endl;
    sort(s1.begin(),s1.end());
    cout<<s1<<endl;
    return 0;
 

}