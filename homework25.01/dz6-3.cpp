#include <iostream>

using namespace std;

int main()
{
	int s = 0;
	int n; cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = i; j < n; j++)
			s++;
	cout << s;
	return 0; //O(n*log(n))
}