#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n,m;
	while (cin>>n>>m)
	{
		double sum = n;
		double item = n;
		for (int i=2;i<=m;i++)
		{
			item = sqrt(item);
			sum += item;
		}
		printf("%.2lf\n",sum);
	}
	return 0;
}