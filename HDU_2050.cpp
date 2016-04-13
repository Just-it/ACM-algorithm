#include <iostream>
using namespace std;
int fn(int x)
{
	if (x == 1)
	{
		return 2;
	}
	else
		return fn(x-1)+x;
}
int main()
{
	int C;
	int n;
	int result;
	while (cin>>C)
	{
		for (int i=0;i<C;i++)
		{
			cin >> n;
			int result = fn(2*n);
			result = result - 2*n;
			cout << result << endl;
		}
	}	
	return 0;
}