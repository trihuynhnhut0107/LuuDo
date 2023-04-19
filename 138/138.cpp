#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x;
	cout << "Nhap x: ";
	cin >> x;
	float f;

	if (x >= 0)
	{
		if (x <= 1)
			f = 5 * x + 7;
		else
			f = 2 * pow(x, 2) + 5 * x + 9;
	}
	else
		f = -2 * pow(x, 3) + 6 * x + 9;
	
	cout << "f=" << f;
	return 1;
}