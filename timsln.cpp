#include<iostream>
#include<conio.h>
#include<math.h>
	using namespace std;
		struct phanso{
			int tu;
			int mau;
		};
		void nhap(phanso a[],int &n)
		{
			for(int i=0;i<n;i++){
			cout<<"a[<<i<<]=";
			cout<<"\n Nhap phan tu:";
			cin>>a[i].tu;
			cout<<"\nNhap mau";
			cin>>a[i].mau;
			}
		}
		void xuat(phanso a[],int n){
			for(int i=0;i<n;i++){
				cout<<a[i].tu<<"/"<<a[i].mau;
				
			}
		}
		phanso max(phanso a[],int n)
		{
		int c,b;
		phanso max=a[0];
		for(int i=1;i<n;i++)
		{
			c=max.tu*a[i].mau;
			b=a[i].tu*max.mau;
			if(c<b){
				max=a[i];
			}
		}
		return max;
		}
		int main ()
		{
			
			phanso a[100];int n,tu,mau;
			cout<<"n=";
			cin>>n;
			nhap(a,n);
			cout<<"mang vua nhap là:";
			xuat(a,n);
			cout<<"\n max la:"<<max(a,n);
			getch();
		}
