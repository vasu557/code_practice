#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
    int mini = INT_MAX;
	int low=0,high = n-1;
	while(low <= high){
	    int mid = (low +high )/2;
	    if(arr[low] <= arr[mid]){
	        mini = min(mini,arr[low]);
	        low = mid+1; // checking right part
	    }
	    else if(arr[mid] <= arr[high]){
	        mini = min(arr[mid],mini);
	        high = mid-1; // right part completed so got toleft part
	    }
	}
	cout<<"minimum element is :"<<mini;
	
	return 0;
}







//finding how many times the array been rotated : 
 find minimum element in sorted array then the index of that min element is the answer
