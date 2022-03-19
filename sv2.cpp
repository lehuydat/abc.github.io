#include<iostream>
using namespace std;
class student{
	private:
		string hoten;
		int diachi;
		int namsinh;
		public:
			student(string hoten,int diachi,int namsinh){
				this->hoten=hoten;
				this->diachi=diachi;
				this->namsinh=namsinh;
			}
			student(){
				this->hoten="Nguyen van A";
				this->diachi=1234;
				this->namsinh=2002;
				
			}
			void sethoten(string hoten){
				if(hoten.length()==0){
				cout<<"yeu cau nhap lai";
				}
				else 
				hoten=hoten;
			}
			void setdiachi(long int diachi){
				if( diachi<0){
				cout<<"Yeu cau nhap lai";
				}
				else 
				diachi=diachi;
			}
			void setnamsinh(long int namsinh){
				if(namsinh<0){
				cout<<"Vui longf nhap lai";
				}
				else 
				namsinh=namsinh;
				
			}
		string  gethoten(){
			return this->hoten;
		}	
		int  getnamsinh(){
			return this->namsinh;
		}
		int getdiachi(){
			return this->diachi;
		}
};
int main(){
	 student a;
	cout<<a.gethoten()<<"\t"<<a.getdiachi()<<"\t"<<a.getnamsinh()<<endl;
	student a1("Tran van B",-5678,-2000);
	cout<<a1.gethoten()<<"\t"<<a1.getdiachi()<<"\t"<<a1.getnamsinh()<<endl;;
	 a1.sethoten("Luong van B");
	 a1.setdiachi(10000);
	 a1.setnamsinh(4);
	cout<<a1.gethoten()<<"\t"<<a1.getdiachi()<<"\t"<<a1.getnamsinh()<<endl;
	
}
