#include <iostream>

using namespace std;

bool ready = false;
int a, b, i;
int main()
{
	b = 0;
	i = 0;
	while (!ready)                               // � ���� b ��������� ����������� a, ���� � �� ����� ����� 0, ����� b ������� �� ���-�� ����������� (��� i)
	{                                            // 
		cin >> a;                                //
		b = b + a;                               //
		i++;                                     // 
		if (a == 0) ready = true;                //  
	}
	cout << b / i;
	return 0;
}