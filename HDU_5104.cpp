#include <iostream>
#define N 10005
using namespace std;
bool IsPrime(int n)
{
	bool flag = true;
	for (int i=2;i*i<=n;i++)
	{
		if (0 == n%i)
		{
			flag = false;
			break;
		}
	}
	return flag;
}
int main()
{
	int number;
	int p1,p2,p3;
	int arry[N];
	int tuple;
	memset(arry,0,N*sizeof(int));
	for (int i=2;i<N;i++)
	{
		if (IsPrime(i))
		{
			arry[i] = 1;
		}
	}
	while (cin >> number)
	{
		tuple = 0;
		for (p1=2;p1<number;p1++)
		{
			for (p2=p1;p2<=(number - p1)/2;p2++)
			{
				p3 = number - p1- p2;
				if (arry[p1]&&arry[p2]&&arry[p3])
				{
					tuple++;
				}
			}
		}
		cout << tuple <<endl;
	}
	return 0;
}
