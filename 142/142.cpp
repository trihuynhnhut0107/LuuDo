#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int t = n;
	int dn = 0;
	int dv;
	while (t != 10)
	{
		dv = t % 10;
		dn = dn * 10 + dv;
		t / 10;
	}
	cout << "So dao nguoc la" << dn;
	return 1;
}