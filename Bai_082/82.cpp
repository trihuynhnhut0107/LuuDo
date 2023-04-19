#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x, n;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	float s = 0;
	float t = 1;
	int i = 1;
	while (i <= n)
	{
		t *= sin(x);
		s += t;
		i++;
	}
	cout << s;
	return 0;
}