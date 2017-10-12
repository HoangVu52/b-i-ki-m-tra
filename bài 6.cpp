#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char* argv[])
{
	int n, i, j, dem;
	cout << "Nhap N: ";
	cin >> n;
	for (i = 2; i < n; i++)
	{
		dem = 0;
		for (j = 1; j <= i; j++)
			if (i%j == 0)
				dem = dem + 1;
		if (dem == 2)
			cout << i << " ";
	}
	cout << "\n \n";
	system("pause");
	return 0;
}