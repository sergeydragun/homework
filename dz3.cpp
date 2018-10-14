#include <iostream>

using namespace std;

bool ready = false;
int a, b, i;
int main()
{
	b = 0;
	i = 0;
	while (!ready)                               // к чилу b постоянно прибаляются a, пока а не стане равно 0, тогда b делится на кол-во прибавлений (это i)
	{                                            // 
		cin >> a;                                //
		b = b + a;                               //
		i++;                                     // 
		if (a == 0) ready = true;                //  
	}
	cout << b / i;
	return 0;
}