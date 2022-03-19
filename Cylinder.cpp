#include<iostream>
#include<string>
#include<iomanip>
#define pi 3.14
#define MAX 100
using namespace std;
class ht{
	private:
		float r;
		float h;
		float cvday,sxq,stp,v;
	public:
		ht(){
			r=h=cvday=sxq=stp=v=0;
			}
			void Nhap(){
				cout<<"Nhap ban kinh r=";
				cin>>r;
				cout<<"Nhap chieu cao h= ";
				cin>>h;
			}
			void tinhcv(){
				cvday=2*pi*3.14;
			}
			void tinhv(){
				v=pi*r*r*h;
			}
			void tinhstp(){
				stp= cvday*h+pi*r*r*2;
			}
			void tinhsxq(){
				sxq=cvday*h;
			}
			void xuat(){
				cout<<r<<"\n"<<h<<cvday<<"\n"<<stp<<"\n"<<sxq<<endl;
		}
};
int main(){
	ht h1;
	h1.Nhap();
	h1.xuat();
	h1.tinhcv();
	h1.tinhstp();
	h1.tinhsxq();
	h1.tinhv();
	system("pause");
	return 0;
}
