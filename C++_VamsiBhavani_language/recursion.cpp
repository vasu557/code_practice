#include<bits/stdc++.h>
using namespace std;
	int i=1;
 void fib(int n){
 
 	if(i>n) return;
 	cout<<"vasu"<<endl;
 	
 	fib(n-1);
 }
int main(){
	int n;
	cin>>n;
	fib(n);
	return 0;
}
