#include <iostream>

using namespace std;

int min(int a[3])
{                                          //�� mi ������� ����� ������ �����, ������� �� ���������� � ���������� � ���� �������� ����� ������,
	int mi = a[0];                         //�� ��� � ����� � mi. � ��� � ������ ������
	for (int i = 1; i < 3; i++)            // 
	{                                      //
		if (a[i] < mi) mi = a[i];          // 
	}
	return mi;
}

int max(int b[3])                          //���� �����, ��� � � ����������� ����� (�� ����) �� ��� ������������
{
	int ma = b[0];
	for (int i = 1; i < 3; i++)
	{
		if (b[i] > ma) ma = b[i];
	}
	return ma;
}

int agv(int c[3])                            //��� ������� ������������ � ���� ���������� � ����� ������� �� 3
{
	int ag;
	for(int i = 0; i < 3; i++)
	{ 
		ag =+ c[i];
	}
	return ag / 3;
}

int med(int d[3])                               // ������� ����� ��������� ����� ����� �������� � ������ ��� � d[0]. ����� ������ ���� �����, �� ������ ��� �� � d[0], � � d[1]. � �.�.
{
	int me;
	for (int i = 0; i < 2; i++)
	{
		for (int k = 1; k < 3; k++)
		{
			if (d[k] > d[i])
			{
				me = d[i];
				d[i] = d[k];
				d[k] = me;
			}
		}
	}

	return d[1];
}

void swap(int e[3])                                  // ��������� ���� ���������, ������� ���������� ��������� ������. ����� �����, ��� ����� ���������� �� ���� ������ � � ����� ������ ���������� ������ �� ����������
{
	int sw;
	sw = e[2];
	for (int i = 2; i <= 0 ; i--)
	{
		if (!i - 1 < 0)
			e[i] = e[i - 1];
		else
			e[0] = sw;
	}
	//return e[0 - 2];
	for(int i = 0;i<3;i++)
	cout << e[i] << endl;
}

int main()
{
	int a1[3] = { 3,4,5 };
	cout << min(a1) << endl;
	cout << max(a1)<< endl;
	cout << agv(a1) << endl;
	cout << med(a1) << endl;
	swap(a1);
	
	system("pause");
	return 0;
}