#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x;
	cout << "Nhap x: ";
	cin >> x;
	int x2 = x * x;
	int x4 = x2 * x2;
	int x8 = x4 * x4;
	int x3 = x2 * x;
	int x11 = x8 * x3;
	cout << "Gia tri cua x^11 la: " << x11;
	return 1;
}