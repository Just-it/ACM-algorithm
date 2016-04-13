#include <iostream>

using namespace std;
int fn(int x)
{
	if (x<=4)
		return x;
	else
		return fn(x-1)+fn(x-3);
}
int main()
{
	int n;
	while (cin>>n)
	{
		if (0 == n)
			break;
		cout << fn(n)<<endl;
	}
	return 0;
}

