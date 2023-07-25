#include<iostream>
using namespace std;
int dupl(int arr[],int n){
    for(int i=0;i<n;i++){
        int ans = arr[i];
        if(arr[ans-1]<0){
            cout<<arr[ans-1]*(-1);
        }
        arr[ans-1]=arr[ans-1]*(-1);
    }
    return 0;
}

int main(){

    int n;
    cin>>n;

    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    return (dupl(a,n));

}