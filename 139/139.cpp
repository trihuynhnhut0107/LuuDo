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
	float x;

	if (a == 0)
	{
		if (b == 0)
			cout << "Vo so nghiem";
		else
			cout << "Vo nghiem";
	}
	else
	{
		x = (float) - b / a;
		cout << "x=" << x;
	}
	return 1;
}