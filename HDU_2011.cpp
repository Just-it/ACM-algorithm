#include <iostream>
#include <string>
using namespace std;

int main()
{
	int m,n;
	while (cin>>m)
	{
		for (int i=0;i<m;i++)
		{
			cin >> n;
			double value = 0;
			int pow = -1;
			for (int i=1;i<=n;i++)
			{
				pow *= -1;
				value += 1.0/i*pow;
			}
			printf("%.2f",value);
		}
	}
	return 0;
}