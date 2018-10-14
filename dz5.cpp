#include <iostream>

using namespace std;

int min(int a[3])
{                                          //за mi берется самое первое число, которое мы сравниваем с остальными и если найдется чмсло меньше,
	int mi = a[0];                         //то оно и будет в mi. И так с каждым числом
	for (int i = 1; i < 3; i++)            // 
	{                                      //
		if (a[i] < mi) mi = a[i];          // 
	}
	return mi;
}

int max(int b[3])                          //тоже самое, что и с минимальным число (см выше) но уже максимальное
{
	int ma = b[0];
	for (int i = 1; i < 3; i++)
	{
		if (b[i] > ma) ma = b[i];
	}
	return ma;
}

int agv(int c[3])                            //все массивы складываются в одну переменную и потом делятся на 3
{
	int ag;
	for(int i = 0; i < 3; i++)
	{ 
		ag =+ c[i];
	}
	return ag / 3;
}

int med(int d[3])                               // находим самое маленькое число среди массивов и ставим его в d[0]. Потом делаем тоже самое, но ставим уже не в d[0], а в d[1]. И т.д.
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

void swap(int e[3])                                  // создается одна перменная, которая запоминает последний массив. После этого, все числа сдвигиются на одну ячейку и в конце первая занимается числом из переменной
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