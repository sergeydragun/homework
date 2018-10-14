#include <iostream>

using namespace std;

int X, Y, N, i; 
bool ready = false;
int main()
{
	cin >> X;                      
	cout << endl;
	cin >> N;
	cout << endl;
	                                     
	if (X % 2 == 0)                                    // ≈сли число четное, то N не существует
	{
		cout << "None" << endl;
		system("pause");
		return 0;
	}
	Y = 1;
	while (!ready)                                              //перевбор всех возможных чисел, пока такое не найдетс€ и ready не станет true
	{
		if (X*Y % N == 1)                                                                   
		{
			cout << X << "*" << Y << "=" << X * Y << "=" << (X*Y - (X * Y % N)) / N << "*" << N << "+1" << endl;
			break;
		}
		Y++;
		
	}
}