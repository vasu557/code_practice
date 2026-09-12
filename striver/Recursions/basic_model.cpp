#include <bits/stdc++.h>
using namespace std;
void myFunction(int count){
	if(count == 5) return ;
	
	cout<<count<<endl;
	
	myFunction(count+1);
}
int main(){
	int count=0;
	myFunction(count);
	return 0;
}
