#include<iostream>
using namespace std;

class TK{
	private:
	string tk;
	int mon;
	public:
		TK(){
		this->tk="12345";
		this->mon=10000;
		}
		TK(string tk,int mon){
			this->tk=tk;
			this->mon=mon;
		}
		void setmon(int mon){
			//this this->mon=mon<0?0:st
			if(mon<0)
			cout<<"xin long nhap lai";
			else
			this->mon=mon;
		}
		void settk(string tk){
			this->tk=tk;
		}
		string gettk(){
			return this->tk;
		}
		int getmon(){
			return this->mon;
		}
	
};
int main(){
	 TK t;
	cout << t.gettk() << "\t" << t.getmon() << endl;
	TK t1("23546", 300000);
	cout << t1.gettk() << "\t" << t1.getmon() << endl;
	t1.settk("113355");
	t1.setmon(50000000);
	
	cout << t1.gettk() << "\t" << t1.getmon() << endl;
}
