#include <iostream>

using namespace std;

int main()
{
	int m, n;       /* m - boy - 1; n - girl - 0*/
	cin  >> n;
	cin >> m;

	int *a = new int[m + n];

	int j = 0;
	while (m > 0 && n > 1)
	{
		a[j] = 1; m--;
		a[j + 1] = 0; n--;
		a[j + 2] = 0; n--;
		j += 3;
	}
	j -= 3;
	if (m == 0 && n == 0) for(int i = 0; i < n+m; i++) cout << a[i] << endl;
	else if (m == 0)
	{
		for (int i = j; i < n + m; i++) a[i] = 0;
		for (int i = 0; i < n + m; i++) cout << a[i] << endl;
	}
	else
	{
		for (int i = j; i < n + m; i++) a[i] = 1;
		for (int i = 0; i < n + m; i++) cout << a[i] << endl;
	}
	return 0; //O(n)
}