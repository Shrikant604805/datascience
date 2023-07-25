#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s ="5945432";
    sort(s.begin(),s.end(), greater<int>());
    cout<<s<<endlrrrr;
    return 0;
}