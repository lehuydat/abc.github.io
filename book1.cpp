#include<iostream>
#include<math.h>
using namespace std;
class Book{
	private:
	string ts;
	int gs;
	int gg;
	public:
	
		void setgs(long int gs){
			if(gs>0)
			this->gs=gs;
			else
			cout<<"\n gia am nhap lai";
		}
		void setgg(long int gg){
			if(gg>0)
			this->gg=gg;
			else
				cout<<"\n nhap lai";
		}
		void setts(string ts){
			if(ts.length()==0)
			cout<<"chuoi rong nhap lai!!";
			else ts=ts;
		}
		int getgs(){
			return this->gs;
		}
		int getgg(){
			return this->gg;
		}
		string getts(){
			return this->ts;
		}
		Book(){
			this->ts="Book animal";
			this->gs=100000;
			this->gg=500;
		}
		Book(string ts,int gs,int gg){
			this->ts=ts;
			this->gs=gs;
			this->gg=gg;
		}
};
int main(){
	Book a;
	cout<<a.getgg()<<"\t"<<a.getgs()<<a.getts()<<endl;
	Book a1("animation",30000,4);
	cout<<a1.getgg()<<a1.getts()<<"\t"<<a1.getgs()<<endl;
	a1.setts("abc");
	a1.setgg(10000);
	a1.setgs(4);
	cout<<a1.getgg()<<a1.getgs()<<a1.getts()<<endl;
}
