#include<bits/stdc++.h>
using namespace std;
class Class1{
	string name;
	public:
		void set(string c){
			name =c;
	}
	void print(){
		cout<<name<<endl;
}	
};


int main(){
	Class1 obj1;
	obj1.set("vasu");
	obj1.print();
	return 0;
}
