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
	float s = 1 + x;
	float t = x;
	int m = 1;
	int i = 3;
	while (i <= 2 * n + 1)
	{
		t = t * x * x;
		m = m * i * (i - 1);
		s = s + t / m;
		i = i + 2;
	}
	cout << "S(" << x << "," << n << ")=" << s;
	return 1;
}