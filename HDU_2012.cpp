#include <iostream>
using namespace std;
bool IsPrime(int value)
{
	bool flag = true;
	for (int i=2;i<value;i++)
	{
		if (value%i==0)
		{
			flag = false;
			break;
		}
	}
	return flag;
}
int main()
{
	int x,y;
	while (cin >> x >> y)
	{
		if (x==0&&y==0)
			break;
		bool temp = true;
		for (int j =x;j<=y;j++)
		{
			int value = j*j+j+41;
			if (!IsPrime(value))
			{
				temp = false;
				break;
			}
		}
		if (temp)
			cout << "OK\n";
		else
			cout << "Sorry\n";
	}
	return 0;
}