#include <iostream>

using namespace std;

int main()
{
	int n;
	int m;
	cin >> n;
	int *arr = new int[n];

	for (int i = 0; i < n; i++) cin >> *(arr + i);

	for (int i = 0; i < n - 1; i++)
	{
		for (int k = 1; k < n; k++)
		{
			if (*(arr + i) < *(arr + k))
			{
				m = *(arr + i);
				*(arr + i) = *(arr + k);
				*(arr + k) = m;
			}
		}
	}
	
	for (int i = 0; i < n; i++) cout << *(arr + i) << " ";
	system("pause");
	return 0;
}