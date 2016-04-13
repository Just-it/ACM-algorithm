#include <iostream>
using namespace std;
void Insert_Sort(int A[],int length,int value)
{
	for (int i=0;i<length;i++)
	{
		if (value < A[i])
		{
			for (int j=length;j>i;j--)
			{
				A[j] = A[j-1];
			}
			A[i] = value;
			break;
		}
	}
}
int main()
{
	int n,m;
	int arr[101];
	while (cin>>n>>m)
	{
		if (0==n&&0==m)
			break;
		for (int i=0;i<n;i++)
			cin >> arr[i];
		Insert_Sort(arr,n,m);
		for (int i=0;i<=n;i++)
		{
			cout << arr[i];
			if (i==n)
				cout << endl;
			else
				cout << " ";
		}
	}	
	return 0;
}