/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <math.h>

using namespace std;

bool F(int b)
{
    int f;   //proveriaet kolichestvo 
    for(int i = 0; i < sqrt(b); i++)
    {
        if(b % i == 0) f++
    }
    if (f > 2) return false;
    else return true;
}
int main()
{
    int n;
    cin >> n;
    int *a = new int[n+2];
    for(int i = 2; i < n; i++)
    a[i] = i;
    for(int p = 2; k < n; k++)
    {
        if(!a[p] == 0 && !a[p+2] == 0)
        {
            cout << a[p];
            for(int k = p*p; k < n; k += p)
            if(F(a[k]) == false)
            a[k] = 0;
           
        }
    }
		return 0;
}
