#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char* argv[])
{
	int a, b;
	cout << "nhap a="; cin >> a;
	cout << "nhap b="; cin >> b;
	a = abs(a);
	b = abs(b);
	if (a*b != 0)
	{
		while (a != b)
		{
			if (a > b)
			{
				a = a - b;
			}
			else b = b - a;
		}
		cout << "UCLN:" << a << endl;
	}
	else 
	{
		cout << "k thoa man" << endl;
	}
	system("pause");
	return 0;
}

