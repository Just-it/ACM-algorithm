#include <iostream>
using namespace std;
/*
int get_floor(int number)
{
	if (2 == number)
	{
		return 1;
	}
	else if(3 == number)
	{
		return 2;
	}
	else
		return get_floor(number-1)+get_floor(number-2);
}*/
int main()
{
	int n;
	int M;
	while (cin>>n)
	{
		for (int i=1;i<=n;i++)
		{
			cin >>M;
			int* floor = new int[M];
			floor[0] = 1;
			floor[1] = 2;
			for (int j=2;j<M-1;j++)
			{
				floor[j] = floor[j-1]+floor[j-2];
			}
			printf("%d\n",floor[M-2]);
		}
	}
	return 0;
}