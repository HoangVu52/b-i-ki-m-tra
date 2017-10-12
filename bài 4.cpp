#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char* argv[])
{
	float n, s = 1/2;
	cout << "Nhap n=";
	cin >> n;
	for (float i = 1; i <= n; i++)
	{
		s = s +( 1 / (2 * i));
	}
	cout << s << endl;
	system("pause");
	return 0;
}