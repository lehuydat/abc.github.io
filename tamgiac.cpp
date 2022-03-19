#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	//truc toado
	struct toado{
		float x,y;
	};
	// khai bao bien toado
	float kiemtra();
 toado A,B,C;
	// nhap toa do ba diem
	cout<<"\nNhap toa do 3 diem:";
	cout<<"\n A\t:";
	cin>>A.x>>A.y;
	cout<<"\n B\t:";
	cin>>B.x>>B.y;
	cout<<"\n C\t:";
	cin>>C.x>>C.y;
	//tinh do dai doan thang 
	float d1;//AB
	float d2;//AC
	float d3;//BC
 	d1 = sqrt((A.x-B.x)*(A.x-B.x)+(A.y-B.y)*(A.y-B.y));
	d2 = sqrt((A.x-C.x)*(A.x-C.x)+(A.y-C.y)*(A.y-C.y));
	d3 = sqrt((B.x-C.x)*(B.x-C.x)+(B.y-C.y)*(B.y-C.y));
	// in do dai ba doan thang
	cout<<"\n AB :"<<d1;
	cout<<"\n AC :"<<d2;
	cout<<"\n BC :"<<d3;
		//kiem tra tinh thang hang
		float kiemtra();{
		if(d1+d2==d3||d1+d3==d2||d2+d3==d1){
		cout<<"\n 3 diem A,B,C khong tao thanh tam giac";
		cout<<"\n yeu cau nhap lai";
 }
		else
		{
		cout<<"\nla tam giac";
}
}
		float p=(d1+d2+d3)/2;
	float s=(p*(p-d1)*(p-d2)*(p-d3));
	cout<<"\n chu vi tam giac :"<<2*p;
	cout<<"\n dien tich tam giac :"<<s;
	// kiem tra day la tam giac can (tai dinh nao ) ,deu hay tam giac thuong
	if(d1==d2||d2==d3||d3==d1)
	{
	cout<<"\ntam giac can\n";
		if(d1==d2)
		cout<<"\ntam giac can tai dinh A\n";
		else if(d2==d3)
		cout<<"\n tam giac can tai dinh C\n";
		else
		cout<<"\n tam giac can tai dinh B\n";
		}
	else if(d1==d2&&d2==d3)
	cout<<"\ntam giac deu\n";
	else if(d1*d1+d2*d2==d3*d3||d1*d1+d3*d3==d2*d2||d2*d2+d3*d3==d1*d1)
	{
	cout<<"\ntam giac vuong\n";
	if(d1*d1+d2*d2==d3*d3)
	cout<<"\ntam giac vuong dinh A\n";
	else if(d2*d2+d3*d3==d1*d1)
	cout<<"\ntam giac vuong dinh C\n";
	else
	cout<<"\ntam giac vuong dinh B\n";
	}
	else if(d1*d1+d2*d2==d3*d3||d1*d1+d3*d3==d2*d2||d2*d2+d3*d3==d1*d1&&d1==d2||d2==d3||d3==d1)
	cout<<"\ntam giac vuong can\n";
	else
	cout<<"\ntam giac thuong\n";
}
