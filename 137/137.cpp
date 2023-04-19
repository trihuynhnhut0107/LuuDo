#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x;
	cout << "Nhap x: ";
	cin >> x;
	float f;

	if (x >= 5)
		f = -2 * pow(x, 2) + 4 * x - 9;
	else
		f = 2 * pow(x, 2) + 5 * x + 9;
	cout << "f=" << f;
	return 1;
}