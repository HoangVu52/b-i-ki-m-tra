#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char* argv[])
{
	int n, S;
	n = 1;
	while (n<5000)
	{
		S = 0;
		for (int i = 1; i < n; i++)
		{
			if (n%i == 0)
				S = S + i;
		}
		if (S == n) 
			cout << n << endl;
			n++;
		
	}
	system("pause");
	return 0;
}