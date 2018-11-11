#include <iostream>

using namespace std;

int main()
{
	int S = 0;
	unsigned int N;
	cin >> N;
	unsigned int P = 1;
	for (int i = 0; i < N; i++)
	{
		P = P * N;
	}
	cout << P << "\n";
	while (P > 9)
	{
		if (P % 10 == 0)
		{
			S++;
		}
		P = (P - (P % 10)) / 10;
		if (P < 10) break;
	}

	cout << S << "\n";
	//cout << P;
	system("pause");
	return 0;
}