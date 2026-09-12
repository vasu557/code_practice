#include<iostream>
using namespace std;
int main(){
	int a =10;
	int* ptr1 = &a;
	cout<<&a<<endl;
	//cout<<ptr1<<endl;
	//cout<<*ptr1;
	int** ptr2 = &ptr1;
	//cout<<&ptr1<<endl;
	//cout<<ptr2;
	cout<<**ptr2;
	
	return 0;
}



//here a = 10;
//	 &a = adr1;
//	 int* pt1 = &a;
//	 pt1 == &a;
//	 *pt1 == value of a;
//	 
//	 
//	 int** ptr2 = &ptr1;
//	 ptr2 == &ptr1;
//	 *ptr2 == value of ptr1(address of a);
//	 **ptr2 == value of ptr1->value of a = 10;
