#include <iostream>
using namespace std;
void Quick_Sort(int A[],int p,int r)
{
	if (p>=r)
		return ;
	int value = A[r];
	int i = p-1;
	int temp;
	for (int j=p;j<r;j++)
	{
		if (abs(A[j])<abs(value))
		{
			i++;
			temp = A[i];
			A[i] = A[j];
			A[j] = temp;
		}
	}
	i++;
	A[r] = A[i];
	A[i] = value;
	Quick_Sort(A,p,i-1);
	Quick_Sort(A,i+1,r);
}
int main()
{
	int n;
	int arr[100];
	while (cin>>n)
	{
		if (n==0)
			break;
		for (int i=0;i<n;i++)
			cin >> arr[i];
		Quick_Sort(arr,0,n-1);
		for (int i=n-1;i>=0;i--)
		{
			cout<<arr[i];
			if (i==0)
				cout << endl;
			else
				cout << " ";
		}
	}	
	return 0;
}