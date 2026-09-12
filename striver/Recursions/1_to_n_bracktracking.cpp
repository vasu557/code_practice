#include<bits/stdc++.h>
using namespace std;
void myFunction(int i,int n){
	if(i <  1) return ;
	myFunction(i-1,n);
	cout<<i<<endl;
}
int main(){
	int n;
	cin>>n;
	myFunction(n,n);
	return 0;
}
