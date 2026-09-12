#include<bits/stdc++.h>
using namespace std;
void swaping(int &x,int &y){
    int temp = x;
    x =y;
    y = temp;
}
int main(){
    // vector<int>vec{40,10,20,90,50};
    int n;
    cin>>n;
    vector<int>vec;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1-i;j++){
            if(vec[j] > vec[j+1]){
                swaping(vec[j],vec[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++)
    cout<<vec[i]<<" ";
    return 0;
}
