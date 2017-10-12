#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char* argv[])
{
	float a, b, c, x, x1, x2, delta;
	cout << "nhap a="; cin >> a;
	cout << "nhap b="; cin >> b;
	cout << "nhap c="; cin >> c;
	if (a == 0)
		if (b == 0)
			if (c == 0)
				cout << "Phuong trinh vo so nghiem" << endl;
			else
				cout << "Phuong trinh vo nghiem" << endl;
		else
		{
			x = -c / b;
			cout << "Phuong trinh co nghiem x = " << x << endl;
		}
	else
	{
		delta = b*b - 4 * a*c;
		if (delta > 0)
		{
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			cout << "Phuong trinh co 2 nghiem phan biet x1 = " << x1 << endl;
			cout << "Phuong trinh co 2 nghiem phan biet x2 = " << x2 << endl;
		}
		else
		{
			if (delta == 0)
			{
				x = (-b) / (2 * a);
				cout << "Phuong trinh co nghiem kep x1 = x2 = " << x << endl;
			}
			else
				cout << "Phuong trinh vo nghiem" << endl;
		}
	}
	system("pause");
	return 0;
}