#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float xa;
	cout << "Nhap xa: ";
	cin >> xa;
	float ya;
	cout << "Nhap ya: ";
	cin >> ya;
	float xb;
	cout << "Nhap xb: ";
	cin >> xb;
	float yb;
	cout << "Nhap yb: ";
	cin >> yb;
	float xc;
	cout << "Nhap xc: ";
	cin >> xc;
	float yc;
	cout << "Nhap yc: ";
	cin >> yc;
	float xm;
	cout << "Nhap xm: ";
	cin >> xm;
	float ym;
	cout << "Nhap ym: ";
	cin >> ym;

	float sabc = (float)(1 / 2) * (xa * yb + xb * yc + xc * ya - xb * ya - xc * yb - xa * yc);
	float smac = (float)(1 / 2) * (xm * ya + xa * yc + xc * ym - xa * ym - xc * ya - xm * yc);
	float smbc = (float)(1 / 2) * (xm * yb + xb * yc + xc * ym - xb * ym - xc * yb - xm * yc);
	float smab = (float)(1 / 2) * (xm * ya + xa * yb + xb * ym - xa * ym - xb * ya - xm * yb);

	if (sabc == (smac + smab + smbc))
		cout << "Nam trong tam giac";
	else
		cout << "Khong nam trong tam giac";
	return 1;
}