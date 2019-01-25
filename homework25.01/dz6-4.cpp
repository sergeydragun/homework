#include <iostream>

using namespace std;

int main()
{
	int n; int k;
	cin >> n >> k;
	int **mas = new int*[2];
	for (int i = 0; i < 2; i++)
		mas[i] = new int[n];

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < n; j++) mas[i][j] = 0;

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "x = " << i << " y = " << j;
			cin >> mas[i][j];
		}


	int l = 1;
	int *s = new int[(n - (n % 2))/2];
	for (int i = 0; i < (n - (n % 2)) / 2; i++) s[i] = 1;
	bool finish = false;
	int i = 0;
	int j = 0;
	int k = 0;
	do 
	{
	if(mas[i][j] == 0)
	{
		if (mas[i][j + 1] == 0 && !mas[i+1][j] == 0)
		{
			i++;
		}
		
		if (!mas[i][j + 1] == 0 && mas[i + 1][j] == 0)
		{
			j++;
		}

		if (mas[i][j + 1] == 0 && mas[i + 1][j] == 0)
		{
			if (mas[i + 1][j + 1] == 0)
			{
				s[k]++;
				k++;
			}
		}

		if (!mas[i][j + 1] == 0 && !mas[i + 1][j] == 0)
		{
			
		}
	}

	} while (!finish);


	int *s = new int[n]
}