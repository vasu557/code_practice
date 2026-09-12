#include<bits/stdc++.h>
using namespace std;
void myFunction(int i,int n){
	if(i > n) return ;
	myFunction(i+1,n);
	cout<<i<<endl;
}
int main(){
	int n;
	cin>>n;
	myFunction(1,n);
	return 0;
}
