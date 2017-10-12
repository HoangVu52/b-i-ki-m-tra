#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char* argv[])
{
	int n, i, dem;
	dem = 0;
	i = 1;
	cout << "n= ";
	cin >> n;
	while (i <= n)
	{
		if (n%i == 0)
			dem++;
		i = i + 1;
	}
	if (dem == 2) cout << "SNT" << endl;
	else cout << "k la SNT" << endl;
	system("pause");
	return 0;
}
