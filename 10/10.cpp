#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x1;
	cout << "Nhap toa do x1: ";
	cin >> x1;
	int y1;
	cout << "Nhap toa do y1: ";
	cin >> y1;
	int x2;
	cout << "Nhap toa do x2: ";
	cin >> x2;
	int y2;
	cout << "Nhap toa do y2: ";
	cin >> y2;
	int x3;
	cout << "Nhap toa do x3: ";
	cin >> x3;
	int y3;
	cout << "Nhap toa do y3: ";
	cin >> y3;



	float a = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	float b = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	float c = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	float p = a + b + c;
	cout << "Chu vi tam giac la: " << p;
	return 1;
}