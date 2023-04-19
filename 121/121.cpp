#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float ft = 1;
	float ftt = 1;
	float fhh = 0;
	int i = 2;
	while (i <= n)
	{
		fhh = ft + ftt;
		ftt = ft;
		ft = fhh;
		i = i + 1;
	}
	cout << "So hang thu n la: " << fhh;
	return 1;
}