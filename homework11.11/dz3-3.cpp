#include <iostream>

using namespace std;

bool prime;
int check(int n)   //A simple number or a complex
{
	prime = true;
	for (int i = 2; i <= n - (n % 2); i++)
	{
		if (n % i == 0) prime = false;
	}
	return(prime);
}

int main()
{
	bool finish = false;
	int a = 2; // NUMPER
	int b = 0; // PRIME NUMPER
	while (!finish)
	{
		if (check(a) == true)
		{
			b++;
			if (check(b) == true)
			{
				finish = true;
			}
		}
		a++;
	}

	cout << b << " - " << a - 1;
	system("pause");
	return 0;
}