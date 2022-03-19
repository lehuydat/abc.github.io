#include<iostream>
using namespace std;
class circle{
	private:
		int R;
		public:
			circle(){
				this->R=1;
			}
			circle(int R){
				this->R=R;
			}
			void setR(int R){
				if(R<0){
					cout<<"Yeu cau nhap lai";
				}
				else 
				this->R=R;
			}
			int getR(){
				return this->R;
			}
};
int main(){
	circle C;
	cout<<C.getR()<<endl;
	circle C1(4);
	cout<<C1.getR()<<endl;
	C1.setR(-5);
	cout<<C1.getR()<<endl;
	
}
