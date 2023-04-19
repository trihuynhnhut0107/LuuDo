#include <iostream>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = 1;
	int i = 1;
	while (i <= n)
	{
		s = s + pow(x, i);
		i = i + 1;
	}
	cout << "S(" << x << "," << n << ")=" << s;
	return 1;
}