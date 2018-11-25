#include <iostream>

using namespace std;

int F(int a) //vozvodit 10 v nujnuu stepen
{
	int N = 1;
	for (int i = 0; i < a - 1; i++)
	{
		N = N * 10;
	}
	return(N);
}
int FF(int ba) // funkcia "razvorachivaet" chislo
{
	int ab = ba % 10;
	ba = (ba - (ba % 10)) / 10;
	while (!ba == 0)
	{
		ab = ab * 10 + (ba % 10);
		ba = (ba - (ba % 10)) / 10;
	}
	return(ba);
}
int main()
{
	int n;
	cin >> n;
	int *Arr = new int[n - (n % 2)];
	int s;
	if (n % 2 == 1) s = 10;
	else s = 1;
	int k = 0;
	for (int i = F((n - (n % 2)) / 2); i < F((n - (n % 2)) / 2) * 10; i++) 
	{
		Arr[k] = i * s * FF(i);
		k++;
	}
	
	///ne obrashaite vnimanie. prosto proverka
	cout << k;
	system("pause");
	///
	return 0;
}