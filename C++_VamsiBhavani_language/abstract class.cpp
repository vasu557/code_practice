//#include<bits/stdc++.h>
//using namespace std;
//
//class Shape{
//	public:
//	virtual void show()=0;
//	
//};
//class Square : public Shape{
//	public:
//	void show(){
//		cout<<"I have 4 sides ;";
//	}
//
//};
//int main(){
//	Square sq;
//	sq.show();
//	return 0;
//}







#include <iostream>
using namespace std;

class Shape {
public:
    void draw() { cout << "Drawing Shape\n"; }
};

class SquarePublic : public Shape {};   // public inheritance
class SquarePrivate : private Shape {}; // private inheritance

int main() {
    SquarePublic sp;
    sp.draw();   // ? works, still public

    SquarePrivate spr;
    // spr.draw(); // ? error, now private because of private inheritance
}

