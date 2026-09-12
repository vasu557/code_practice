#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string bin="";
	while(n > 0){
		int r=n%2;
		bin+='0'+r; //or you can use bin.push_back('0' + r);
		n=n/2;
	}
	
	reverse(bin.begin(),bin.end());
	for(int i=0;i<bin.length();i++){
		cout<<bin[i]<<" ";
	}
	return 0;
}
