#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a;
	cout << "Nhap a: ";
	cin >> a;
	int b;
	cout << "Nhap b: ";
	cin >> b;

	int temp = a;
	a = b;
	b = temp;
	cout << "So a la: " << a << endl << "So b la: " << b;
	return 1;
}