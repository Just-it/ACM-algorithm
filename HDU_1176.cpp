#include <iostream>
#include <string>
using namespace std;
int max(int a,int b,int c)
{
	int max_value=a;
	if (a<b)
	{
		max_value = b;
	}
	if (a<c)
	{
		max_value = c;
	}
	return max_value;
}
int main()
{
	int m;
	int x,T;
	int a[10009][15];
	while (scanf_s("%d",&m))
	{
		memset(a,0,sizeof(a));
		int max_T=0;
		if (m==0)
		{
			break;
		}
		for (int i=1;i<=m;i++)
		{
			scanf_s("%d%d",&x,&T);
			if (T>max_T)
			{
				max_T = T;
			}
			a[T][x+1]++;
		}
		for (int i=max_T-1;i>0;i--)
		{
			for (int j=1;j<=11;j++)
			{
				a[i][j] += max(a[i+1][j-1],a[i+1][j],a[i+1][j+1]);
			}
		}
		printf("%d\n",max(a[1][5],a[1][6],a[1][7]));
	}
	return 0;
}