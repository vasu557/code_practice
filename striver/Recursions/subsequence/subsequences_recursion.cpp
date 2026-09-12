#include<bits/stdc++.h>
using namespace std;
void myFunction(int i,vector<int>&vec,vector<vector<int>>&ans,vector<int>&temp){
    if(i == vec.size()){
        ans.push_back(temp);
        return;
    }
    temp.push_back(vec[i]);
    myFunction(i+1,vec,ans,temp);
    temp.erase(temp.begin()+i);  // temp.pop_back();
    myFunction(i+1,vec,ans,temp);
    
}
int main(){
    vector<int>vec = {3,1,2};
    vector<vector<int>>ans;
    vector<int>temp;
    myFunction(0,vec,ans,temp);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
