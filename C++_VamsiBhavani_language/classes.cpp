#include<bits/stdc++.h>
using namespace std;
class Class1{
	int a;
	string color;
	public:
		void set(int x , string col){
			a = x;
			color = col;
			cout<<a<<endl;
			cout<<color;
		}
};
int main(){
	Class1 obj1;
//	obj1.a = 5;
//	obj1.color = "blue";
//	cout<<obj1.a<<endl;
//	cout<<obj1.color;

	obj1.set(5,"blue");
	return 0;
}
