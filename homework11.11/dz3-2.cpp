#include <iostream>

using namespace std;

int main()
{
	int a;
	int Sum = 0;
	cin >> a;
	bool F = false;
	while (!F)
	{
		if (a < 1) F = true;
		if (!((a % 10) % 2 == 0))
		{
			Sum = Sum +  a % 10;
		}
		a = (a - (a % 10)) / 10;
	}
	cout << endl;
	cout << Sum;
	system("pause");
	return 0;
}