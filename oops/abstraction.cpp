#include<bits/stdc++.h>
using namespace std;
class myClass{
	private :
	string user;
	int acc;
	int bank_bal;
	bool deposit(int money){
		bank_bal = bank_bal +money;
		return true;
	}
	bool with_draw(int money){
		if( money > bank_bal)
		return false;
		
		bank_bal = bank_bal - money;
		return true;
	}
	int getmoney(){
		return bank_bal;
	}
	
	
	public :
		myClass(string name,int no,int amount){
			name = user;
			acc =no;
			bank_bal = amount;
		}
	void addmoney(int money){
		if(deposit(money)){
			cout<<"money added successfully "<<endl;
			cout<<"total amount you added now : "<<money<<endl;
		}
		else{
			cout<<"something went wrong :"<<endl;
		}
	}
	void with_draw_money(int money){
		if(with_draw(money)){
			cout<<"money successfully drawn !"<<endl;
			cout<<money<<" you withdrawed"<<endl;
		}
		else{
			cout<<"some thing went wrong"<<endl;
		}
	}
	void get_bank_bal(){
		cout<<"balance is :"<<getmoney();
	}
};
 int main(){
 	myClass obj1("vasu",1,0);
 	obj1.addmoney(1000);
 	obj1.with_draw_money(500);
 	obj1.get_bank_bal();
 	return 0;
 }
