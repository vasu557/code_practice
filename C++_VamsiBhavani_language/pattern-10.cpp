#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=2*n -1;i++){
		if(i<=2*n/2){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
	}
	else{
		for(int j=2*n-i;j>0;j--){
			cout<<"*";
		}
	}
		cout<<endl;
	}
	return 0;
}
