#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<bool>vec(n+1,true);
	vec[0]=vec[1]=false;
	for(int i=2;i*i<=n;i++){
		if(vec[i]==true){
			for(int j=i*i;j<=n;j+=i){
				vec[j]=false;
			}
		}
	}
	for(int i=2;i<=n;i++){
		if(vec[i] == true){
			cout<<i<<" ";
		}
	}
	return 0;
}
