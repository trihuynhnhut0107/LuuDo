#include <iostream>
using namespace std;
int main()
{
	int x, n;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	int s = 0;
	int t = 1;
	int i = 1;
	int dau = 1;
	while (i <= n)
	{
		t *= x;
		s += dau * t;
		i++;
		dau = -dau;
	}
	cout << "Tong la: " << s;
	return 0;
}