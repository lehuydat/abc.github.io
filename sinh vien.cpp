#include<iostream>
using namespace std;

class hs{
		private:
			string ma,ten,dc;
			int nam;
		public:
			void setma(string ma){
				this->ma=ma;
			}
			void setten(string ten){
			this->ten=ten;
			}
			void setdc(string dc)
			{
				this->dc=dc;
			}
			void setnam(int nam){
				this->nam=nam;
			}
			string getma(){
				return ma;
			}
			string getten(){
			return ten;
			}
			string getdc(){
				return dc;
			}
			int getnam(){
				return nam;
			}
			
		hs(){
		this->ma="654321";
		this->ten="Nguyen Van A";
		this->dc="12/7 Thi tran";
		this->nam=2002;
		}
		hs(string ma1,string ten1,string dc1,int nam1){
			this->ma=ma1;
			this->ten=ten1;
			this->dc=dc1;
			this->nam=nam1;
		} 	
		
		
};
int main(){
	hs h;
	int age=19;
	cout<<h.getma()<<h.getten()<<"\t"<<h.getdc()<<h.getnam()<<endl;
	cout<<"tuoi cua ban la"<<age<<endl;
}
