#include <iostream>
#include <math.h>

using namespace std;

int Feuler(int n)
{
	int i, s;
	s = sqrt(n);
	for (i = 2; i <= s; i++) {
		if ((n%i) == 0) return (i - 1)*Feuler(n%i);
		return n - 1;
	}
}

	int main()
	{
		int a;
		cin >> a;
		a = Feuler(a);
		cout << a;
		return 0;
	}
