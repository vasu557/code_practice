

same like lowerbound but difference is
lower_bound - >=
upper_bound - >
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
        if(arr[mid] > target){
            ans = arr[mid];
            high =mid-1;
        }
        else if(arr[mid] <= target){    // remeber this <=
            low= mid+1;
        }
    }
    cout<<"ans is "<<ans;
    return 0;
}






----------------------












int idx = upper_bound(arr, arr + n, target) - arr;
int idx  = upper_bound(vec.begin(),vec.end(),target) - vec.begin();
