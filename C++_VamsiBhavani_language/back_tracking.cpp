//#include<bits/stdc++.h>
//using namespace std;
//	int i=1;
// void fun(int i,int n){
// 		if(i>n) return;
// 		fun(i+1,n);
// 		cout<<i<<" ";
// 
// }
//int main(){
//	int n;
//	cin>>n;
//	fun(1,n);
//	return 0;
//}




#include<bits/stdc++.h>
using namespace std;
 void fun(int i,int n){
 		if(i<1) return;
 		fun(i-1,n);
 		cout<<i<<" ";
 
 }
int main(){
	int n;
	cin>>n;
	fun(5,n);
	return 0;
}
