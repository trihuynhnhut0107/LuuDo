#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap so canh noi tiep: ";
	cin >> n;
	int r;
	cout << "Nhap ban kinh: ";
	cin >> r;


	float p = 2 * n * r * sin(3.14 / n);
	cout << "Chu vi da giac la: " << p;
	return 1;
}