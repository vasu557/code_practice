#include<bits/stdc++.h>
using namespace std;

int binary(int arr[], int l, int h, int target){
    while(l <= h){
        int mid = (l + h)/2;

        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            return binary(arr, l, mid-1, target);
        }
        else{
            return binary(arr, mid+1, h, target);
        }
    }
    return -1;   // ? directly return -1 if not found
}

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

    sort(arr, arr+n);

    int result = binary(arr, 0, n-1, target);

    if(result == -1){   // ? fixed
        cout << "element not found";
    }
    else{
        cout << "element found at index " << result;
    }

    return 0;
}
-------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

int binary(int arr[], int l, int h, int target){
    bool found = false;

    while(l <= h){
        int mid = (l + h) / 2;

        if(arr[mid] == target){
            found = true;
            return mid;
        }
        else if(arr[mid] > target){
            return binary(arr, l, mid - 1, target);
        }
        else{
            return binary(arr, mid + 1, h, target);
        }
    }

    if(found == false){
        return -1;
    }
}

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

    int result = binary(arr, 0, n - 1, target);

    if(result == -1){   // ? fixed == 
        cout << "element not found";
    }
    else{
        cout << "element found at index " << result;
    }

    return 0;
}

