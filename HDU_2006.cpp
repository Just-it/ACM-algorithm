#include <iostream>
using namespace std;

int main()
{
	int n;
	int value;
	while (cin >> n)
	{
		int product = 1;
		for (int i=0;i<n;i++)
		{
			cin >> value;
			if (value%2)
				product = product*value;
		}
		cout << product << endl;
	}
	return 0;
}