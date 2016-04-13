#include <iostream>
#define MAX 2147483647
using namespace std;

int main()
{
	int n;
	int st[100];
	while (cin>>n)
	{
		int min_value = MAX;
		int key = -1;
		for (int i=0;i<n;i++)
		{
			cin >> st[i];
			if (min_value > st[i])
			{
				min_value = st[i];
				key = i;
			}
		}
		st[key] = st[0];
		st[0] = min_value;
		for (int i=0;i<n;i++)
		{
			cout << st[i];
			if (i == n-1)
				cout << endl;
			else
				cout << " ";
		}
	}
	return 0;
}

