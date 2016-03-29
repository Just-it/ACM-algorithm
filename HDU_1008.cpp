#include <iostream>
#define N 100
using namespace std;
int main()
{
	int n;
	int request[N];
	while (cin>>n)
	{
		memset(request,0,sizeof(request));
		int sum = 0;
		if (0 == n)
		{
			break;
		}
		for (int i=1;i<=n;i++)
		{
			cin >> request[i];
			if (request[i] > request[i-1])
			{
				sum += (request[i]-request[i-1])*6+5;
			}
			else
				sum += (request[i-1]-request[i])*4+5;
		}
		cout << sum << endl;
	}
	return 0;
}