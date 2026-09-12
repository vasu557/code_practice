//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	string s;
//	cout<<"ente string :"<<endl;
//	cin>>s;
//	reverse(s.begin(),s.end());
//	int pos;
//	cout<<"enter pos :"<<endl;
//	cin>>pos;
//	for(int i=0;i<s.length();i++){
//		if(i==pos){
//			if(s[i] == '1') cout<<"it is set";
//			else cout<<"not a set";
//		}
//	}
//	return 0;
//}



//optimal way using bitwise

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"enter number :";
	
	cin>>n;
	int pos;
	cout<<"enter pos :"<<endl;
	cin>>pos;
	int res = n & (1<<pos); // for right shift (1 & (n>>pos)) ==1 ->set else not set
	if(res >0){
		cout<<"it is set ";
	}
	else{
		cout<<"not a set ";
	}
	return 0;
}

