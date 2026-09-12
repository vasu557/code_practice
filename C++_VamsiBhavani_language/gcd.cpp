//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int x,y;
//	cin>>x>>y;
//	int temp1;
//	for(int i=min(x,y);i>0;i--){
//		if(x%i == 0 && y%i == 0){
//			cout<<"GCD is :"<<i<<endl;
//			temp1=i;
//			break;
//		}
//	}
//	cout<<"LCM is :"<< (x*y)/temp1;
//	return 0;
//}



#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
	while(x!=0 && y!=0){
		if(x >y){
			x =x%y;
		}
		else{
			y=y%x;
		}
	}
	cout<<"GCD is :"<<max(x,y);
	return 0;
}
