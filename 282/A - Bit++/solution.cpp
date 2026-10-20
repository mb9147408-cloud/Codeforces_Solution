#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n, c = 0;
	cin >> n;
 
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
 
		if(s[1] == '+')
		{
			c++;
		}
		else
		{
			c--;
		}
	}
	
	cout << c << endl;
 
	return 0;
}