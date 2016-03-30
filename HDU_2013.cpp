#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n;
	int sum;
	while (cin>>n)
	{
		sum = pow(2,n)+pow(2,n-1)-2;
		printf("%d\n",sum);
	}
	return 0;
}