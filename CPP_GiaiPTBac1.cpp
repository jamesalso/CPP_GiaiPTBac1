#include <iostream>
using namespace std;

double tong(double a, double b) { return a + b; }
double hieu(double a, double b) { return a - b; }
double tich(double a, double b) { return a * b; }
double thuong(double a, double b) { 
    if (b != 0) { return a / b; }
    else {
        return 0;
    }
}


int main()
{
    cout << "CHUONG TRING TINH TOAN 2 SO\n";
    double so1, so2;
    cout << "NHAP SO 1:";
    cin >> so1;
    cout << "NHAP SO 2:";
    cin >> so2;
    cout << "Tong cua 2 so la:" << tong(so1, so2);
    cout << "\nHieu cua 2 so la:" << hieu(so1, so2);
    cout << "\nTich cua 2 so la:" << tich(so1, so2);
    cout << "\nThuong cua 2 so la:" << thuong(so1, so2);
    return 0;
}
