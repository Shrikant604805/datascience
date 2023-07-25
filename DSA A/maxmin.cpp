#include<iostream>
using namespace std;
void printA(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void SwapAl(int arr[], int size){
    for(int i=0;i<8;i=i+2){
        if(i+1<size){
        swap(arr[i],arr[i+1]);
        }
    }
    
}
int main(){
    int size;
    cin >> size;

    int a[8]={1,2,3,4,5,6,7,8};
    SwapAl(a,8);
    printA(a,8);
    return 0;

}