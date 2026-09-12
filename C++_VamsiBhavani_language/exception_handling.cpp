#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	try{
		if(n>18){
			cout<<"you are elegible for vote"<<endl;
		}
		else{
			throw(n);
		}
		
	}
	catch(char i){
		cout<<"you are not eligible for vote because you are less than 18";
	}
	return 0;
}
