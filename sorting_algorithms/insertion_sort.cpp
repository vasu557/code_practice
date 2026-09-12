#include<bits/stdc++.h>
using namespace std;
void swapping(int &x,int &y){
    int  temp=x;
    x =y;
    y = temp;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1] > arr[j]){
            swapping(arr[j-1],arr[j]);
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
