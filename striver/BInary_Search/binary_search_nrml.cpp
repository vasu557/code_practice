#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int target;
    cout << "enter target :";
    cin >> target;

    sort(arr, arr + n);

    int l = 0, h = n - 1;
    bool found = false;   // ? flag added

    while(l <= h){
        int mid = (l + h) / 2;

        if(arr[mid] == target){
            cout << "element found at index : " << mid;
            found = true;   // ? mark found
            break;
        }
        else if(arr[mid] > target){
            h = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }

    if(!found){   // ? if never found
        cout << "element not found";
    }

    return 0;
}

