#include <iostream>
#include <string>
using namespace std;
bool End_Number(int x)
{
	bool flag = false;
	int sum = 0;
	for (int i=1;i<=(x/2)+1;i++)
	{
		if (x%i==0)
			sum += i;
	}
	if (x==sum)
		flag = true;
	return flag;
}
int main()
{
	int n,count;
	int begain,end;
	int num1,num2;
	while (cin>>n)
	{
		for (int j=1;j<=n;j++)
		{
			count = 0;
			cin >> num1 >> num2;
			if (num1<num2)
			{
				begain = num1;
				end = num2;
			}
			else
			{
				begain = num2;
				end = num1;
			}
			for (int i=begain;i<=end;i++)
			{
				if (End_Number(i))
					count++;
			}
			cout << count <<endl;
		}
	}
	return 0;
}