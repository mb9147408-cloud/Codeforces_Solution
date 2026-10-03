#include <iostream>
using namespace std;
 
int main()
{   
	int n;
	cin >> n;
	int Petya, Vasya, Tonya;
	int result = 0;
 
	for (int i = 0; i < n; i++)
	{
		cin >> Petya >> Vasya >> Tonya;
		if (Petya + Vasya + Tonya >= 2)
		{
			result++;
		}
	}
	cout << result << endl;
	return 0;
}