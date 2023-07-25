#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n!=0){
        int digit = n % 2;
        cout<<digit;
        n=n/2;
    }
    return 0;
}