#include<iostream>

using namespace std;
class taiKhoan {
  private:
    string maTK;
  int soTien;
  public:
    void setmaTK(string maTK) {
      this -> maTK = maTK;
    }
  void setsoTien(int soTien) {
    this -> soTien = soTien;
  }
  string getmaTK() {
    return this -> maTK;
  }
  int getsoTien() {
    return this -> soTien;
  }
  taiKhoan() {
    this -> maTK = "1234";
    this -> soTien = 0;
  }
  taiKhoan(string maTK1, int soTien1) {
    maTK = maTK1;
    soTien = soTien1;
  }
};
int main() {
  taiKhoan TK;
  cout << TK.getmaTK() << "\t" << TK.getsoTien() << endl;
  taiKhoan TK1("23546", 300000);
  cout << TK1.getmaTK() << "\t" << TK1.getsoTien() << endl;
  TK1.setmaTK("113355");
  TK1.setsoTien(50000000);
  cout << TK1.getmaTK() << "\t" << TK1.getsoTien() << endl;
}
