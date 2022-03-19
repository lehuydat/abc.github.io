#include<iostream>
using namespace std;
class phanso{
	private:
		int tu,mau;
	public:
		setTU(int tu){
		this->tu=tu;
		}
		phanso(){
	this->tu=0;
	this->mau=1
		}
//		hàm tao trong oop
		phanso(int tu,int mau){
		this->tu=tu;
		this->mau=mau;
		}
//		phanso(int tu,int mau=10){
//			this->tu=tu;
//			this->mau=mau;
//			
//		}

phanso(int tu,int mau){
	this->tu=tu;
	this->mau=mau;
}
		void xuat(){
		cout<<this->tu<<"/"<<mau;
		}
};
int main(){
phanso PS;
PS.xuat();
phanso PS1(10,20);
PS1.xuat

}
