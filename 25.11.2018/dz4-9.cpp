/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for(int i = 2; i < n; i++)
    a[i] = i;

	for (int p = 2; k < n; k++)
	{
		if (!a[p] == 0)
		{
			cout << a[p];
			for (int k = p * p; k < n; k += p)
				if (F(a[k]) == false)
					a[k] = 0;

		}
	}

    for(int p = 2; k < n; k++)
    {
        if(!a[p] == 0 && !a[2*p+2] == 0)
        {
			if (2 * p + 2 > n) break;
			cout << a[p];
          
        }
    }
		return 0;
}
