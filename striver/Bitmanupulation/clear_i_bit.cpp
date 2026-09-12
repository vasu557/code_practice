#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter number :";
	cin>>n;
	int pos;
	cout<<"enter position :";
	cin>>pos;
	int res = n & ~(1<<pos);
	cout<<res;
	return 0;
}
