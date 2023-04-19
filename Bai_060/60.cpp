#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int t = 1;
	int m = n;
	while (m != 0)
	{
		int dv = m % 10;
		t = t * +dv;
		m = m / 10;
	}
	cout << "Tich cac chu so la: " << t;
	return 1;
}