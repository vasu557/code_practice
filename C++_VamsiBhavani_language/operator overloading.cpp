#include<bits/stdc++.h>
using namespace std;
class Complex{
	public:
		int real;
		int img;
	
		Complex(int r,int i){
			real = r;
			img =i;
		}
		Complex operator +(const Complex&c){
			return Complex(real + c.real,img + c.img);
			// here real is this pointer for obj1+c.obj2 like this it is working this points for obj1 so need any c.
			//instead of real(obj1->this) we can also write 	return Complex(this->real + c.real,this->img + c.img);
			
			
		}
		void show(){
			//cout<<"real is :"<<real<<"  img is :"<<img<<"i"<<endl;
			cout<<real<<"+"<<img<<"i"<<endl;
		}
};
int main(){
	Complex obj1(5,2);
	Complex obj2(10,5);
	obj1.show();
	obj2.show();
	Complex obj3 = obj1+obj2;
	obj3.show();
	
	return 0;
}
























//
//#include<bits/stdc++.h>
//using namespace std;
//class Complex{
//	public:
//		int real;
//		int img;
//	
//		Complex(int r,int i){
//			real = r;
//			img =i;
//		}
//		Complex(){
//			
//		}
//		Complex operator +(const Complex&c){
//		//	return Complex(real + c.real,img + c.img);
//			//here insted of direct returning wh can also like creating new object
//			//but for that we need to create default constructor to not to get error
//			Complex ans; //object created ->and this isdefault constructor
//			ans.real = real+c.real;
//			ans.img = img+c.img;
//			return ans;
//			
//			
//	Complex operator + (const Complex &c) {
//    Complex ans;           // Step 1: Create a new Complex object ans (using default constructor)
//    ans.real = real + c.real;  // Step 2: Set ans.real
//    ans.img = img + c.img;     // Step 3: Set ans.img
//    return ans;            // Step 4: Return ans object
//}
//
//		}
//		void show(){
//			//cout<<"real is :"<<real<<"  img is :"<<img<<"i"<<endl;
//			cout<<real<<"+"<<img<<"i"<<endl;
//		}
//};
//int main(){
//	Complex obj1(5,2);
//	Complex obj2(10,5);
//	obj1.show();
//	obj2.show();
//	Complex obj3 = obj1+obj2;
//	obj3.show();
//	
//	return 0;
//}
