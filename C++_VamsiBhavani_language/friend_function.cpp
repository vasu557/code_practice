#include<bits/stdc++.h>
using namespace std;
class Class1{
	string name="vasu";
	void print(){
		cout<<name<<endl;
}
		friend void solve(Class1);
};
void solve(Class1 ob){
	cout<<ob.name<<endl;
	ob.print();
}

int main(){
	
	Class1 ob;
	//ob.print(); ->gettign error because it is private
	solve(ob);
	return 0;
}
