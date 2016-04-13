#include <iostream>
using namespace std;

int main()
{
	int T;
	int i,value;
	char st[1000];
	while (cin>>T)
	{
		for (i=0;i<T;i++)
		{
			cin >> value;
			st[i] = value;
		}
		st[i] = '\0';
		cout << st << endl;
	}
	return 0;
}

