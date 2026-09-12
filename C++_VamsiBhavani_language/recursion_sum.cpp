#include<bits/stdc++.h>
using namespace std;
	int sum=0;
 void fun(int n){
 		if(n<1) {
 		cout<<sum<<" ";
		return;
		}
		sum+=n;
 		fun(n-1);
 
 }
int main(){
	int n;
	cin>>n;
	fun(n);
	return 0;
}
