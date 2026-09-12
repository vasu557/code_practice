#include<bits/stdc++.h>
using namespace std;
class Name{
		public:
			int x=5;
		Name(){
			cout<<"class created";
		}
		
		Name(int x){
			cout<<x<<endl;
			cout<<this->x;
		}
};
int main(){
	Name pb2(10);
	return 0;
}
