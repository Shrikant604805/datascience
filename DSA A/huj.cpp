#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[100];
    for(int i=0;i<n;i++){
        cin>> a[i];
    }
    int sum1[100],sum2[100],ans[100];
    int i=0;
    int j= n-1;
    sum1[0]=0;
    sum2[0]=0;
    while(i<n){
        sum1[i]=sum1[i]+a[i];
        cout<<sum1[i]<<" ";
        while(j>i){
            sum2[i]=sum2[i]+a[j];
            j--;
             
        }
        cout<<sum2[i]<<" ";
        ans[i]=max(sum1[i],sum2[i]);
        i++;
    }
    for(int i=0;i<3;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}