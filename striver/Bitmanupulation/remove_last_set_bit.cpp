#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter number :";
	cin>>n;
	int res = n & (n-1);
	cout<<res;
	return 0;
} 
