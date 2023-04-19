#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float r;
	cout << "Nhap ban kinh: ";
	cin >> r;


	float tt = (4/3) * 3.14 * r * r * r;
	cout << "The tich hinh cau la: " << tt;
	return 1;
}