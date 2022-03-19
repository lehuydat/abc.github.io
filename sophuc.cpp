#include<iostream>
using namespace std;
class sp{
	private:
		double a,b;
		public :
				void nhapsl()
				{
				cout<<"\n nhap phan thu:";
				cin>>a;
				cout<<"\n nhap phan ao";
				cin>>b;
				
				}
				void insl(){
					cout<<"phan thu la"<<a;
					cout<<"phan ao la"<<b<<"\n";
				}
				sp cong(sp u2)
				    {
				        sp u;
				        u.a = a + u2.a;
				        u.b = this->b + u2.b;
				        return u;
				    }
				sp tru(sp u2){
					sp u;
					u.a = a-u2.a;
					u.b = this->b-u2.b;
				return u;
				}
			sp nhan(sp u2){
			sp u;
			u.a=a*u2.a;
			u.b=this->b*u2.b;
			
			}				
};
int main(){
	sp ucong,utru,unhan,u1,u2;
	cout<<"\n nhap sp thu 1",u1.nhapsl();
	cout<<"\nnhap so phuc thu2",u2.nhapsl();
	cout << "\n so phuc tong :";
     ucong = u1.cong(u2); ucong.insl();
    cout << "\n so phuc hieu :";
     utru = u1.tru(u2); utru.insl();
     cout<<"\n sp tich :";
     unhan =u1.nhan(u2);
     unhan.insl();
     system("pause");
}
