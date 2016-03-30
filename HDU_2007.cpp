#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	unsigned int m,n,sum_even,sum_odd,begain,end;
	while (cin>>m>>n)
	{
		if (m>n)
		{
			begain = n;
			end = m;
		}
		else
		{
			begain = m;
			end = n;
		}
		sum_even = 0;
		sum_odd = 0;
		for (int i=begain;i<=end;i++)
		{
			if (0 == i%2)
				sum_even += i*i;
			else
				sum_odd += i*i*i;
		}
		printf("%u %u\n",sum_even,sum_odd);
	}
	return 0;
}