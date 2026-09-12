#include<bits/stdc++.h>
using namespace std;
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
    int ans=-1;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] >= target){
            ans = arr[mid];
            high =mid-1;
        }
        else if(arr[mid] < target){
            low= mid+1;
        }
    }
    cout<<"ans is "<<ans;
    return 0;
}






--------------------------
or

int idx = lower_bound(arr, arr + n, target) - arr;


for vector

int idx = lower_bound(v.begin(), v.end(), target) - v.begin();
----------------------------------------



lowerbound  or ceil - >=
upperbound - >
floor       - <=
ceil        - >=
