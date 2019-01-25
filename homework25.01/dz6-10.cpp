#include <iostream>

using namespace std;

bool F(int a, int b)
{
	for (int i = 2; i <= abs(a); i++)
	{
		if ((a%i == 0) && (b%i == 0))
		{
			return false;
			cin.get();
			cin.get();
			exit(0);
		}
	}
	return true;
}
int main()
{
	int n; cin >> n;
	int k1; cin >> k1;

	int *a = new int[n];
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (n % i == 0)
		{
			a[k] = i;
			k++;
		}
	}
	int *b = new int[k + 1];
	b = a;
	delete []a;
	
	int **mas = new int*[n];
	for (int i = 0; i < n; i++)
		mas[i] = new int[k1];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < k1; j++) mas[i][j] = 1;

	int x = 0;
	int z = 0;
	int c;
	for (int i = 0; i < k; i++)
	{
		for (int j = i+1; j < k; j++)
		{
			if (F(b[i], b[j]))
			{
				mas[x][z] = b[i];
				mas[x][z+1] = b[j];				
				z += 2;
				c = i;
				i = j;
			}
		}
		i = c;
		x++;
		z = 0;
	}

	int S = 1;
	int K = 0;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < k1; j++) S = S * mas[i][j];
		if (S < n) K++;
	}
	cout << K;
	return 0;
}