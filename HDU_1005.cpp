#include <iostream>
using namespace std;
int main()
{
	int A,B,n,T;
	int arr[51];
	while (cin>>A>>B>>n)
	{
		if (A==0&&B==0&&n==0)
			break;
		int counting = 0;
		for (int i=1;i<=50;i++)
		{
			if (i<3)
			{
				arr[i] = 1;
				counting++;
			}
			else
			{
				arr[i] = (A*arr[i-1]+B*arr[i-2])%7;
				if (arr[i] == 1&&arr[i-1]==1)
					break;
				else
					counting++;
			}
		}
		T = counting-1;
		arr[0] = arr[T];
		cout << arr[n%T] <<endl;
	}
	return 0;
}