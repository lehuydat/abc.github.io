#include<iostream>
using namespace std;
class Account{
	private:
		string matk;
		int soTien;
		public:
			void setmatk(string matk){
			this->matk=matk;
			}
			void setsoTien(int soTien){
				this->soTien=soTien;
			}
		string	getmatk(){
			return matk;
			}
		int getsoTien(){
			return soTien;
		}	
			Account( ){
				this->matk="1234567";
				this->soTien=0;
			}
			Account(string matk1,int soTien1){
			matk=matk1;
			soTien=soTien1;
			
			}
};
int main(){
Account tk;
cout<<tk.getmatk()<<"\t"<<tk.getsoTien()<<endl;
Account tk1("234567",50000);
cout<<tk1.getmatk()<<"\t"<<tk1.getsoTien()<<endl;
tk1.setmatk("231231333434");
tk1.setsoTien(5000);
cout<<tk.getmatk()<<"\t"<<tk.getsoTien()<<endl;

}
