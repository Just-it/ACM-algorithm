#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n,m;
	while (cin>>n>>m)
	{
		double a[51][6]={0};
		int count = 0;
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<m;j++)
			{
				cin >> a[i][j];
				a[i][5] += a[i][j];
				a[50][j] += a[i][j];
			}
			a[i][5] = a[i][5]/m;
		}
		for (int j=0;j<m;j++)
			a[50][j] = a[50][j]/n;
		for (int i=0;i<n;i++)
		{
			printf("%.2f",a[i][5]);
			if (i<n-1)
				printf(" ");
			else
				printf("\n");
			if (a[i][0]>=a[50][0]&&a[i][1]>=a[50][1]&&a[i][2]>=a[50][2]
			&&a[i][3]>=a[50][3]&&a[i][4]>=a[50][4])
			count++;
		}
		for (int j=0;j<m;j++)
		{
			printf("%.2f",a[50][j]);
			if (j<m-1)
				printf(" ");
			else
				printf("\n");
		}
		cout <<count<<"\n\n";
	}
	return 0;
}