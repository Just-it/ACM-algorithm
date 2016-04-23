#include <iostream>
#include <map>
using namespace std;
int order_mult(int x)
{
	int result = 1;
	if (0 == x)
		return result;
	for (int i=1;i<=x;i++)
	{
		result *= i;
	}
	return result;
}
int main()
{
	int n;
	long double e;
	cout << "n e"<<endl;
	cout << "- -----------"<<endl;
	for (n=0;n<=9;n++)
	{
		e = 0;
		for (int i=0;i<=n;i++)
			e += 1.0/order_mult(i);
		if (n<3)
			cout<<n<<" "<<e<<endl;
		else
			printf("%d %.9lf\n",n,e);
	}
	return 0;
}