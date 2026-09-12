#include<bits/stdc++.h>
using namespace std;
class myclass{
	private:
		int x,y;
	public :
		int setx(int a)
		   {
		   	x = a;
		   }
		int sety(int b)
		  {
		  	y = b;
		  }
		void getx(){
			cout<<x<<endl;
		}
		void gety(){
			cout<<" y is : "<<y<<endl;
		}
};
int main(){
	myclass ob;
	ob.setx(10);
	ob.sety(20);
	
	ob.getx();
	ob.gety();
	return 0;
}
