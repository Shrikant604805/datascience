#include<iostream>
using namespace std;
int firstocc(int arr[], int n, int key){
    int s=0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid] > key){
            e = mid-1;
        }
        else if(arr[mid]<key){
            s = mid +1;
        }
        mid = s + (e-s)/2;

    }
    return ans; 
}
int lastocc(int arr[], int n, int key){
    int s=0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(arr[mid] > key){
            e = mid-1;
        }
        else if(arr[mid]<key){
            s = mid +1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int n,key;
    cin >> n >> key;

    int a[100];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout<<firstocc(a,n,key)<<endl;
    cout<<lastocc(a,n,key)<<endl;
    return 0;
}