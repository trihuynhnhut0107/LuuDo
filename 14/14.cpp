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
	int x16 = x8 * x8;
	int x32 = x16 * x16;

	cout << "Gia tri cua x^32 la: " << x32;
	return 1;
}