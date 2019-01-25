#include <iostream>

using namespace std;

int *F(int *a, int first, int last)
{
	int mid = (first + last) / 2;
	int i = first;
	int j = last;
	do {
		while (a[i] < mid) i++;
		while (a[j] > mid) j--;
		if (a[i] < a[j])
		{
			int x = a[i];
			a[i] = a[j];
			a[j] = x;
		}
	} while (i < j);
	if (i < mid) 
		F(a, i, mid - 1);
	if (j > mid)
		F(a, mid + 1, j);
}
int main()
{
	int n;
	int k;
	cin >> n;
	cin >> k;
	int *a = new int[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	a = F(a, 0, n-1);
	int x = 0;
	for (int i = n-1; i > k; i--)
	{
		x += a[i];
	}
	cout << x;
}
