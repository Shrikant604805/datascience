#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"this is lower case"<<endl;
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"this is upper case"<<endl;
    }
    else if(ch>='0' && ch<='9'){
        cout<<"this is numeric"<<endl;
    }
    return 0;
}