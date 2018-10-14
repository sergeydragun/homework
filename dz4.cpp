#include <iostream>
#include <vector>

using namespace std;




int main()
{
	int num;
	int sum = 0;
	cin >> num;
	vector <int> a(num);
	for (int i = 0; i < num; i++)
	{
		cin >> a[i];
		if ((a[i] % 72 == 0 || a[i] % 27 == 0) && !a[i] % 2016 == 0) sum = +a[i];
	}

	cout << sum;
	return 0;
}

