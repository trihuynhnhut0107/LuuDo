#include <iostream>
using namespace std;
int main() {
	float a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && b + c > a && a + c > b)
	{
		if (a == b && b == c && a == c)
		{
			cout << "la tam giac deu";
		}
		else
		{
			if (a * a + b * b == c * c || b * b + c * c == a || a * a + c * c == b)
			{
				if (a == b || b == c || a == c)
				{
					cout << "la tam giac vuong can";
				}
				else
				{
					cout << "la tam giac vuong";
				}
			}
			else
			{
				if (a == b || b == c || a == c)
				{
					cout << "la tam giac can";
				}
				else
				{
					cout << "la tam giac thuong";
				}
			}
		}
	}
	else
	{
		cout << "ko phai la tam giac";
	}
	return 0;
}