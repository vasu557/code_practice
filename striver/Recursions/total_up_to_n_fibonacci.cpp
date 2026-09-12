#include<bits/stdc++.h>
using namespace std;
void myFunction(int n,vector<int>&vec){
	vec.push_back(0);
	vec.push_back(1);
	int last = 1;
	int slast =0;
	for(int i=2;i<n;i++){
		int cur = last+slast;
		vec.push_back(cur);
		slast = last;
		last = cur;
	}
	
	for(int i=0;i<n;i++){
		cout<<vec[i]<<" ";
	}
}

int main(){
	int n;
	cin>>n;
	vector<int>vec;
	myFunction(n,vec);
	return 0;
}
