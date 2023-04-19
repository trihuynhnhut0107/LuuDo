#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x;
	cout << "Nhap x: ";
	cin >> x;
	int x2 = x * x;
	int x3 = x2 * x;
	int x5 = x2 * x3;
	int x10 = x5 * x5;
	int x15 = x10 * x5;
	cout << "Gia tri cua x^15 la: " << x15;
	return 1;
}