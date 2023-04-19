#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int x;
	cout << "Nhap x: ";
	cin >> x;
	int t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * x;
		i = i + 1;
	}
	cout << "Tich T la: " << t;
	return 1;
}