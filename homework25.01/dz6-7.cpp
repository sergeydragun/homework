#include <iostream>

using namespace std;

int *F(int a, int *arr, int k)
{
	for (int i = 0; i < k; i++)
	{
		if (arr[i] == a)
		{
			break;
		}
		if (arr[i] == 0)
		{
			arr[i] = a;
		}
	}
	return arr;
}
int main()
{
	int k; cin >> k;
	int m; cin >> m;
	int *n = new int[m]; for (int i = 0; i < m; i++) cin >> n[i];
	
	int *a = new int[k]; for (int i = 0; i < k; i++) a[k] = 0;

	for (int i = 0; i < m - 1; i++)
	{
		a = F(n[i] - n[i + 1], a, k);
	}

	for (int i = 0; i < m; i++) cout << a[i];

	return 0; //O(m*k*log(k))
}