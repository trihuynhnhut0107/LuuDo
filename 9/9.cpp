#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap so canh noi tiep: ";
	cin >> n;
	int r;
	cout << "Nhap ban kinh: ";
	cin >> r;


	float dt = (1 / 2) * n * r * r * sin(2 * 3.14 / n);
	cout << "Dien tich da giac la: " << dt;
	return 1;
}