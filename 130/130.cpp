#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float y;
	cout << "Nhap y: ";
	cin >> y;
	float z;
	cout << "Nhap z: ";
	cin >> z;
	
	if (x < y + z && y < x + z && z < x + y)
		cout << "Ton tai tam giac";
	else
		cout << "Khong ton tai tam giac";
	return 1;
}