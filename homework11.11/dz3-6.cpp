
#include <iostream>

using namespace std;

int F(int a, int b) //vozvodit chislo v stepen
{
	int c = a;
	for (int i = 0; i < b; i++) a = a * c;
	return(a);
}

int main() {
	int n;
	cin >> n;
	long long max_power;

	/*we take max number of same numbers from 2 to n and compare them*/

	int max = n;
	int h;
	for (int i = 2; i < n; i++)
	{
		h = F(i, (n - n % i) / i) * (n % i);
		if (h > max) max = h;
	}
	cout << h;
	system("pause");
}