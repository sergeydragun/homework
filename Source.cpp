#include <iostream>

using namespace std;

int n;
bool ready = false;         
int main()
{
	cin >> n;
	for (int i = 2; i < (n - (n % 2)) / 2; i++)       //цикл проверяет на делимость всех чисел, вплоть до половины заданного
	{
		if (n % i == 0)                              //если остаток равен нулю - значит число делится
		{
			cout << "Composite" << endl;
			break;                                   //дальше смысла проверять нет
			ready = true;                            
		}
		if (!ready) cout << "Prime";                         //если такого числа найдено не было, значит он простое
	}

		
	return 0;
}
