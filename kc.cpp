#include<iostream>
#include<math.h>
using namespace std;

class Diem{
	private:
		int x;
		int y;
		public:
	void nhap(){
		cout<<"Nhap toa do  x";
		cin>>this->x;
		cout<<"Nhap toa do  y";
		cin>>this->y;
	
	}
	void xuat(){
		cout<<"("<<this->x<<","<<this->y<<")";
	}
	double kc(Diem d2){
		double kc;
	kc = sqrt(double(this->x-d2.x)*(this->x-d2.x)+(this->y-d2.y)*(this->y-d2.y));
	return kc;
	}
};
int main(){
	Diem d1,d2;
	double khoangcach;
	cout<<"diem a:\n";
	d1.nhap();
	cout<<"\ndiem b:\n";
	d2.nhap();
	cout<<"\n Toa do diem A:";
	d1.xuat();
	cout<<"\n Toa do diem B:";
	d2.xuat();
	khoangcach=d1.kc(d2);
	cout<<"khoang cach giua 2 diem la:";
cout<<khoangcach;
	cout<<endl;
}
