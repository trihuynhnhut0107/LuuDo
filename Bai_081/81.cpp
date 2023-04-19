#include <iostream>
using namespace std;
int main()
{
	int x, n;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	float s = (float)1 / x;
	int t = x;
	int i = 1;
	while (i <= n)
	{
		t *= x + 1;
		s += (float)1 / t;
		i++;
	}
	cout << "Tong la: " << s;
	return 0;
}