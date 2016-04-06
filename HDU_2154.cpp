#include <iostream>
#include <math.h>
#define MAX 1001
using namespace std;
int main()
{
	int arr[MAX][3];
	arr[2][0] = 2;
	arr[2][1] = 1;
	arr[2][2] = 1;
	for (int i=3;i<MAX;i++)
	{
		arr[i][0] = arr[i-1][1]+arr[i-1][2];
		arr[i][0] = arr[i][0]%10000;
		arr[i][1] = arr[i-1][0]+arr[i-1][2];
		arr[i][1] = arr[i][1]%10000;
		arr[i][2] = arr[i-1][0]+arr[i-1][1];
		arr[i][2] = arr[i][2]%10000;
	}
	int n;
	while (cin >> n)
	{
		if (n==0)
			break;
		cout << arr[n][0] << endl;
	}
	return 0;
}