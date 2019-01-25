#include <iostream>

using namespace std;

int **F(int first, int last, int **mas)
{
	int i = first;
	int j = last;
	int x;
	int mid = ((i + j) - (i + j) % 2) / 2;

	do {
		while (mas[0][i] < mid) i++;
		while (mas[0][j] > mid) j--;

		if (mas[0][i] < mas[0][j])
		{
			x = mas[0][i];
			mas[0][i] = mas[0][j];
				mas[0][j] = x;

				x = mas[1][i];
				mas[1][i] = mas[1][j];
				mas[1][j] = x;
		}
	} while (i < j);

	    if (last - first < 3) return mas;
		else if (i < last) return F(first, i, mas);
		else if (j > first) return F(j, last, mas);
}

int main()
{
	int n; cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int m; cin >> m;
	int *b = new int[m]; //1
	int *c = new int[m]; //2
	for (int i = 0; i < m; i++)
	{
		cout << "wattage: "; cin >> b[i];
		cout << "price: "; cin >> c[i];
	}
	
	int **mas = new int*[2];
	for (int i = 0; i < 2; i++)
		mas[i] = new int[m];

	for (int i = 0; i < m; i++) mas[0][i] = b[i];
	for (int i = 0; i < m; i++) mas[1][i] = c[i];
		
	mas = F(0, m - 1, mas);

	int S = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i] < mas[0][j])
			{
				S += mas[1][j];
			}
		}
	}

	cout << S; 
	                      /* O(n*log(n)) */
	return 0;
}