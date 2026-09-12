#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter number :";
	cin>>n;
	int res = n & (n-1);     //remember power of 2 comtains only single set bit so if we do n & n-1 result==0;
	if(res == 0) cout<<"it is power of 2";  
	else cout<<"not a power of 2";
	return 0;
} 
