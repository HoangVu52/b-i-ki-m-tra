#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char* argv[])
{
	int n, i = 1, s = 0;
	cout << "Nhap n=";
	cin >> n;
	while(n!=0)
	{
		i = n % 10;
		n = n / 10;
		s = s + i;
	}

	cout << s << " la so can tim"<< endl;
	system("pause");
	return 0;
}
