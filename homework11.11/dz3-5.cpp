#include <iostream>

using namespace std;

int F(long long A, long long B)
{
	long long C = A;
	for (int i = 0; i < B - 1; i++)
	{
		A = A * C;
	}
	return(A % 10);
}
int main()
{
	int a;
	int b;
	cin >> a;
	cin >> b;
	cout << F(a, b);
	system("pause");
	return 0;
}