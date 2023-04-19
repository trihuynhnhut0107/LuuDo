#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x;
	cout << "Nhap x: ";
	cin >> x;
	int x2 = x * x;
	int x4 = x2 * x2;
	int x8 = x4 * x4;
	int x9 = x8 * x;
	
	cout << "Gia tri cua x^9 la: " << x9;
	return 1;
}