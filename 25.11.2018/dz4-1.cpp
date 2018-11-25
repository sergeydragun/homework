#include <iostream>

using namespace std;

/*
int F(int a, int b)
{
	bool yes = false;
	for(int i = )
}
*/

int main()
{
	int s;
	int X, Y;
	for (int i = 0; i < 78487894; i++) //s kakogo nado nachat perebor
	{
		if ((78487894 - i) % 2018 * 2019 == 0)
		{
			s = i;
			break;
		}
	}

	int *Xl = new int[78487894 - s];
	int *Yl = new int[78487894 - s];

	int k = 0;

	///
	for (int i = 78487894 - s; i > 0; i =- 2018*2017)  ///данный перебор эффективен, так как количство перебираемых элементов равно размеру ответа
	{		
		Xl[k] = i / 2018;
		Yl[k] = (i - Xl[k]) / 2019;
			k++;
	}
	///
	return 0;
}