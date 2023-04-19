#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int k;
	cout << "Nhap k: ";
	cin >> k;
	int s = 0;
	int i = 1;
	while (i <= n)
	{
		s = s + pow(i, k);
		i++;
	}
	cout << "S(" << n << "," << k << ")=" << s;
	return 1;
}