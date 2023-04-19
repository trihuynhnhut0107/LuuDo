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
	int x6 = x4 * x2;
	int x7 = x6 * x;

	cout << "Gia tri cua x^7 la: " << x7;
	return 1;
}