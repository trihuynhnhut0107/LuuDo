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
	float t = x;
	int i = 1;
	while (i <= n)
	{
		t = sin(t);
		s += t;
		i++;
	}
	cout << "Tong la: " << s;
	return 0;
}