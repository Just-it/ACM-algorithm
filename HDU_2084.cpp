#include <iostream>
using namespace std;

int main()
{
	int C;
	int N;
	int x,y;
	int arr1[100][100];
	cin>>C;
	for (int i=0;i<C;i++)
	{
		memset(arr1,0,sizeof(arr1));
		cin >> N;
		for (int j=0;j<N;j++)
		{
			for (int k=0;k<=j;k++)
			{
				cin >> arr1[j][k];
			}
		}
		int max_value = arr1[0][0];
		for (int j=1;j<N;j++)
		{
			for (int k=0;k<=j;k++)
			{
				if (k==0)
					arr1[j][k] = arr1[j][k]+arr1[j-1][k];
				else if (k==j)
					arr1[j][k] = arr1[j][k]+arr1[j-1][k-1];
				else
				{
					x = arr1[j][k]+arr1[j-1][k];
					y = arr1[j][k]+arr1[j-1][k-1];
					arr1[j][k] = x>y?x:y;
				}
				if (max_value < arr1[j][k])
					max_value = arr1[j][k];
			}
		}
		cout << max_value << endl;
	}
	return 0;
}