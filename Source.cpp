#include <iostream>

using namespace std;

int n;
bool ready = false;         
int main()
{
	cin >> n;
	for (int i = 2; i < (n - (n % 2)) / 2; i++)       //���� ��������� �� ��������� ���� �����, ������ �� �������� ���������
	{
		if (n % i == 0)                              //���� ������� ����� ���� - ������ ����� �������
		{
			cout << "Composite" << endl;
			break;                                   //������ ������ ��������� ���
			ready = true;                            
		}
		if (!ready) cout << "Prime";                         //���� ������ ����� ������� �� ����, ������ �� �������
	}

		
	return 0;
}
