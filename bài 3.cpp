#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char* argv[])
{
	float a, b, c, d, max;
	cout << "nhap a="; cin >> a;
	cout << "nhap b="; cin >> b;
	cout << "nhap c="; cin >> c;
	cout << "nhap d="; cin >> d;
	max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	if (d > max)
		max = d;
	cout << "Gia tri lon nhat cua 4 so la: " << max << endl;
	system("pause");
	return 0;
}