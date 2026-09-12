












#include<bits/stdc++.h>
using namespace std;

class Shape{
	public:
	virtual void show()=0;
	
};
class Square : public Shape{
	public:
	void show() override{
		cout<<"I have 4 sides ;";
	}

};
int main(){
	Square sq;
	sq.show();
	return 0;
}

