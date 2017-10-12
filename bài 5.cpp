#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
	int S, n, T;
	cout << "Nhap N: ";
	cin >> n;
	S = 0;
	T = 1;
	for (int i = 1; i <= n; i++)
	{
		T = T*i;
		S = S + T;
	}
	cout << "Tonng S= " << S << endl;
	system("pause");
	return 0;
}