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
			if (arr[i] + arr[k] < min) min = arr[i] + arr[k];            /*� 1 ����� ������������ ����� arr[i] � arr[>=i+4) c mi (������� ��������� ���� ������� �� arr[0] + arr[4]) 
																		 � ���� �� ������ mi, mi - ��� ����� arr[i] � arr[>=i+4)
																		 2 ���� - ��� ���� �����, ������ arr[<=i-4*]*/
																	
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