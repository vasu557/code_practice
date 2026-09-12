#include<bits/stdc++.h>
using namespace std;
int  firstOccur(int arr[],int low,int high,int target ){
    int ans=-1;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] == target){
            ans = mid;
            high = mid-1;
        }
        else if(arr[mid] < target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;
}
int lastOccur(int arr[],int low,int high,int target){
    int ans=-1;
    while(low <= high){
        int mid =(low +high)/2;
    if(arr[mid] == target){
        ans = mid;
        low = mid+1;
    }
    else if(arr[mid] > target){
        high = mid-1;
    }
    else{
        low = mid+1;
    }
    }
     return ans;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"enter target :";
    cin>>target;
    sort(arr,arr+n);
    int low=0,high=n-1;
    int first = firstOccur(arr,low,high,target);
    int last = lastOccur(arr,low,high,target);
    if(first == -1 || last == -1){
        cout<<"elemnt not found";
    }
    else{
        cout<<"first :"<<first <<" last :"<<last;
    }
   
    return 0;
}



//if you want how many times then you should return   last - first +1
