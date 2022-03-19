#include <iostream>
#include<conio.h>
#include<stdio.h>
#include <string.h>
#define MAX 100

using namespace std;

struct sinhVien{
	char name[30];	
	float van, toan;
	float tb;
    char hocluc[10];
};

void nhap(sinhVien sv[], int n) {
	for(int i = 0; i < n; i++) {
		
		cout << endl;
		cout << "Nhap thong tin cho sinh vien thu: " << i + 1 << endl;
		
		cout << "Nhap ten sinh vien: ";
		fflush(stdin);
        gets(sv[i].name);
        
        cout << "Nhap diem van: ";
        cin >> sv[i].van;
        
        cout << "Nhap diem toan: ";
        cin >> sv[i].toan;
        
        sv[i].tb = (sv[i].van + sv[i].toan) / 2;
        
        if(sv[i].tb >= 8) 
		 	strcpy(sv[i].hocluc, "Gioi");
	    else if(sv[i].tb >= 5) 
			strcpy(sv[i].hocluc, "Kha");
	    else 
			strcpy(sv[i].hocluc, "Yeu");
			
   		cout << endl;

	}
}

void printLine(int n) {
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << "_";
    }
    cout << endl;
}

void xuat(sinhVien sv[], int n) {
	for(int i = 0; i < n; i++) {
		
		printLine(100);
		
		cout <<"\n\STT\tHo va ten\tToan\tVan\tDiemTB\tHoc luc";
		printf("\n%d", i + 1);
		
        printf("\t%s\t", sv[i].name);
        printf("\t%.2f\t%.2f\t%.2f\t%s", sv[i].van, sv[i].toan, sv[i].tb, sv[i].hocluc);
        
	}
	printLine(100);
	cout << endl;
}


void sapXep(sinhVien sv[], int n) {
	
	sinhVien temp;
	


	for(int i = 0; i < n - 1; i++) {
		for(int j = i + 1; j < n; j++){
			if(sv[i].tb < sv[j].tb){
				temp = sv[i];
				sv[i] = sv[j];
				sv[j] = temp;
			}
		}  
	}
}

int main() {
	int n;
	
	cout << "Nhap so sinh vien: ";
	cin >> n;

	sinhVien sv[n];
	nhap(sv, n);
	
	cout << "Danh sach sinh vien vua nhap: " << endl;
	xuat(sv, n);
	
	cout << "Danh sach sinh vien sau khi sap xep la:" << endl;
	sapXep(sv, n);
	xuat(sv, n);

	return 0;
}


