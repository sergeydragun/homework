#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "n= ";
	cin >> n;
	int *a = new int[n + 1];
	int *b = new int[n + 1];
	for (int i = 0; i < n + 1; i++)
		a[i] = i;
	
	int p = 2;
	int finish = false;
	int finish2 = false;
	int j = 0;
	while(!finish)
	{
		p++
		if (a[p] != 0)
		{
			
			cout << a[p] << endl;
			for (int k = p * p; k < n + 1; k += p) //otmechaim vse sostavnie chisla a potom ih ubiraem
				a[p] = a[k];
			    a[p] = 0;
			j++;
			if(j==n)
			{
			finish = true;
			}
		}
		
	}
}
