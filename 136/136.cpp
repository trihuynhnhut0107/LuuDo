#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x;
	cout << "Nhap nam x: ";
	cin >> x;

	int y;
	cout << "Nhap nam y: ";
	cin >> y;
	int n = x;
	while (n <= y)
	{
		if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
			cout << "Nam nhuan la: " << n << endl;
		n = n + 1;

	}
	return 1;
}