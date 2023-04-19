#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	float at = 1;
	float bt = 1;
	float ahh = 0;
	float bhh = 0;
	int i = 2;
	while (i <= n)
	{
		ahh = pow(at,2) + 2 * pow(bt,2);
		bhh = 2 * at * bt;
		i++;
		at = ahh;
		bt = bhh;
	}
	cout << "So hang an la: " << ahh << endl << "So hang bn la: " << bhh;
	return 1;
}