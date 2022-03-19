#include<iostream>
using namespace std;
#define max 100
class stack{
	private:
		int top;
		int *a;
	public:
		stack(){
			this->top=-1;
			a= new int[max];
		}
		bool isEmpty(){
			if(this->top==-1) return true;
			else return false;
		}
		bool isFull(){
			if(this->top==max) return true;
			else return false;
		}
		void Push(int x){
			if(isFull())
				cout<<"Ngan xep day! Vui long cap phat them..."<<endl;
			else{
				top++;
				a[top]=x;
			}
		}
		void Pop(){
			if(isEmpty())
				cout<<"Ngan xep rong!"<<endl;
			else{
				cout<<"\nDinh cua ngan xep: "<<a[top]<<endl;
				top--;
			}
		}
		void xuat(){
			for(int i=top; i>=0; i--)
				cout<<a[i]<<"\t";
		}
};
int main(){
	stack s;
	s.Push(1);
	s.Push(2);
	s.Push(3);
	s.Push(0);
	s.xuat();
	cout<<endl;
	s.Pop();
	cout<<endl;
	s.xuat();
}
