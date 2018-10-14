#include <iostream>

using namespace std;

int main()
{
	int n;
	int min;
	cin >> n;
	int *arr = new int[n];

	for (int i = 0; i < n; i++) cin >> arr[i];

	min = arr[0] + arr[4];

	for (int i = 0; i < n; i++)
	{
		for (int k = i + 4; k < n; k++)
		{
			if (arr[i] + arr[k] < min) min = arr[i] + arr[k];            /*В 1 цикле сравнивается сумма arr[i] и arr[>=i+4) c mi (которое изначльно было выбрано за arr[0] + arr[4]) 
																		 и если он меньше mi, mi - эта сумма arr[i] и arr[>=i+4)
																		 2 цикл - это тоже самое, только arr[<=i-4*]*/
																	
		}

		for (int k = i-4; 0 <= k < n-4; k++)
		{
			if(k >= 0)
			if (arr[i] + arr[k] < min) min = arr[i] + arr[k];			
		}	
	}
	cout << min << endl;
	system("pause");
	return 0;
}