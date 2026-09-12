#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int po=1;
	int n=s.length();
	int num=0;
	for(int i=n-1;i>=0;i--){
		if(s[i] == '1'){
			num+=po;
		}
		po*=2;
	}
	cout<<num;
	return 0;
}
