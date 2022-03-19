#include<iostream>
#include<cmath>
using namespace std;
class point{
	private:
	float x,y,z;
	public:
		point(){
			x=y=z=0;
		}
		void nhap(){
			cout<<"Nhap toaj do diem A:";
			cin>>x;
			cout<<"Nhap toa do diem B:";
			cin>>y;
			cout<<"Nhap toa do diem C:";
			cin>>z;
		}
		float kc()
	{
		return sqrt(float(x*x+y*y+z*z));	
}
void xuat(){
	cout<<"\(x,y,z)=("<<x<<","<<y<<","<<z<<");";
}
void nagate(){
	x=-x;
	y=-y;
	z=-z;
}

};
int main(){
	point point;
	cout<<"\nNhap vao diem A:";
	point.nhap();
	point.xuat();
	cout<<"\n Diem A sau khi thay doi la:";
	point.nagate();
	point.xuat();
	cout<<"\n khoang cach diem a la"<<point.kc();
	system("pause");
	return 0;
}
