#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter number :";
	cin>>n;
	int pos;
	cout<<"enter position :";
	cin>>pos;
	int leftshift = 1<<pos;
	int res =(n | leftshift);
	cout<<res;
	return 0;
}
