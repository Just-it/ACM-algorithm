#include <iostream>
using namespace std;
/*
void Quick_Sort(double A[],int p,int r)
{
	if (p>=r)
		return ;
	int value = A[r];
	int i = p-1;
	int temp;
	for (int j=p;j<r;j++)
	{
		if (A[j]<value)
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
}*/
int main()
{
	int n,m;
	int length,remainder;
	while (cin>>n>>m)
	{
		int sum = 0;
		int a=m+1;
		length = n/m;
		remainder = n%m;
		cout << a;
		for (int i=1;i<length;i++)
		{
			a += 2*m;
			cout << " " << a;
		}
		if (remainder != 0)
		{
			for (int j=m*length+1;j<=n;j++)
			{
				sum += 2*j;
			}
			sum = sum/remainder;
			cout <<" " <<sum;
		}
		cout << endl;
	}	
	return 0;
}