#include<iostream>
#include<math.h>
using namespace std;
class circle{
	private:
		float r;
		public:
	circle(){
		this->r=1;
	}
	circle(float r){
		this->r=r;
	}
	void setbk(float r){
		this->r=r;
	}
	float getbk(){
		return this->r;
	}
	float cv(){
		return 2*3.14*r;
	}
	float S(){
		return r*r*3.14;
	}
	
};
int main(){
	circle arr[6];
	float r=0;
	for(int i=0;i<6;i++){
		cout<<"an kinh circle"<<i<<":";
		cin>>r;
		arr[i].setbk(r);
		cout<<"dien tich hinh tron"<<i<<"="<<arr[i].S()<<endl;
		arr[i].setbk(r);
		cout<<"chu vi hinh tron"<<i<<"="<<arr[i].cv()<<endl;
	}
	
}
