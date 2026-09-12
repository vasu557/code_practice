#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {30,10,40,5,50};
    for(int i=0;i<=3;i++){
        int mini=i;
        for(int j=i;j<5;j++){
            if(arr[j] < arr[mini])
              mini =j;
        }
        int temp = arr[i];
        arr[i] = arr[mini];
        arr[mini] = temp;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
