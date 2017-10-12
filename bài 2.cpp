#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char* argv[])
{
	float a, b, c;
	cout << "Nhap canh a= " << endl; cin >> a;
	cout << "Nhap canh b= " << endl; cin >> b;
	cout << "Nhap canh c= " << endl; cin >> c;
	if (((a + b) > c) && ((a + c) > b) && ((c + b)) > a)
	{
		cout << "3 canh co the tao thanh 1 tam giac" << endl;
		if ((a == b) || (a == c) || (b == c))
			if ((a == b) && (a == c))
				cout << "Tam giac deu" << endl;
			else
			{
				if ((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == b*b + a*a))
					cout << "Tam giac vuong can" << endl;
				else
					cout << "Tam giac can" << endl;
			}
		else
			cout << "Tam giac thuong" << endl;
		if ((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == b*b + a*a))
			cout << "Tam giac vuong" << endl;
	}
	else
		cout << "3 canh khong the tao thanh 1 tam giac" << endl;
	system("pause");
	return 0;
}