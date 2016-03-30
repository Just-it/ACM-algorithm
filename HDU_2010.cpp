#include <iostream>
#include <math.h>
using namespace std;
bool IsDaffy(int value)
{
	int remaind;
	int sum=0;
	int quotient = value;
	while (quotient>0)
	{
		remaind = quotient%10;
		sum += remaind*remaind*remaind;
		quotient = quotient/10;
	}
	if (sum == value)
		return true; 
	else
		return false;
}
int main()
{
	int begain,end;
	while (cin>>begain>>end)
	{
		int count = 0;
		for (int i=begain;i<=end;i++)
		{
			if (IsDaffy(i))
			{
				if (0 == count)
					cout << i;
				else
					cout << " " << i;
				count++;
			}
		}
		if (0 == count)
			cout << "no";
		cout << endl;
	}
	return 0;
}