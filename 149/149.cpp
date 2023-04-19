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
	int m = abs(a);
	int n = abs(b);
	int dv;
	int p;
	while (m*n != 0)
	{
		if (m > n)
			m = m - n;
		n = n - m;
	}
	p = m + n;
		
	cout << "Uoc chung lon nhat la:" << p;
	return 1;
}