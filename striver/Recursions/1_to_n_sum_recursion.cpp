#include<bits/stdc++.h>
using namespace std;
void myFunction(int i,int n,int sum){
	
	if(i > n){
		cout<<sum;
		return;
	}
	
	myFunction(i+1,n,sum+i);
	
	
}
int main(){
	int n;
	cin>>n;
	myFunction(1,n,0);
	return 0;
}
