#include<iostream>
using namespace std;
#define max 10

class matran{
	private:
		int n;
		int mt[max][max];
		public:
		matran(){
			for(int i=0;i<=n;i++){
			for(int j=i;j<=n;j++){
				mt[i][j] = 0;
			}
			}
		}

void nhap(){
	cout<<endl;
	for(int i=1;i<=n;i++){
	for(int j=1;j<=n;i++){
	cout<<"ma tran ["<<i<<"]["<<j<<"]:";
	cin>>mt[i][j];
	}
	}
	cout<<endl;
}
void in(){
	for(i=1;i<=n;i++){
		for(j=1;j<=n;i++){
		cout<<mt[i][j]<<"";
		}
		cout<<endl;
	}
}
matran cong(matran b){
matran c=;
for(int i =1;i<=n;i++){
for(int j=1;j<=n;j++){
c.mt[i][j] +=mt[i][j]+b.mt[i][j];
}
}
return c;
}
matran hieu(matran b)
{
	matran c;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
		c.mt[i][j]+= a.mt[i][j]-b.mt[i][j];
			}
	}
	return c;
}
matran nhan(matran b){
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			c.mt[i][j] += a[i][j] *b[i][j];	
		}
	}
	return c;
}
};
void main (){
	matran a,b,c,d;
	cout<<"Nhap cap cua ma tran";
	cin>>n;
	cout<<"Nhap ma tran thu 1:";
	a.nhap();
	cout<<"\nNhap ma tran thu 2:";
	b.nhap();
	system("cls");
	cout<<"\n Ma tran A:\n";
	a.in();
	cout<<"\n Nhap ma tran B:\n";
	c=a.cong(b);
	cout<<"\n Tong 2 ma tran :\n";
	c.in();
	c=a.hieu();
	cout<<"\n Hieu hai ma tran:\n";
	c.in();
	c=a.nhan();
	cout<<"\n Nhan hai ma tran:\n";
	c.in();
	system("pause");
}
