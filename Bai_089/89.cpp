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
	int m = 0;
	int i = 1;
	int dau = -1;
	while (i <= n)
	{
		t *= x;
		m += i;
		s += dau * (float)t / m;
		i++;
		dau = -dau;
	}
	cout << "Tong la: " << s;
	return 0;
}