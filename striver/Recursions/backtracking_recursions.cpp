#include<bits/stdc++.h>
using namespace std;
void myFunction(int i,int n){
	if(i > n) return ;
	cout<<i<<endl;
	i++;
	myFunction(i,n);
}
int main(){
	int n;
	cin>>n;
	myFunction(1,n);
	return 0;
}
