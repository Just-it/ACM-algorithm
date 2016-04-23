#include <iostream>
using namespace std;
void Swap(double* A,double* B)
{
	double s1,s2,s3;
	s1 = A[0]+B[0];
	A[0] = s1-A[0];
	B[0] = s1-B[0];
	s2 = A[1]+B[1];
	A[1] = s2-A[1];
	B[1] = s2-B[1];
	s3 = A[2]+B[2];
	A[2] = s3-A[2];
	B[2] = s3-B[2];
}
void Quick_Sort(double** A,int p,int r)
{
	if (p>=r)
		return ;
	int i=p-1;
	double x = A[r][0];
	double sum=0;
	for (int j=p;j<r;j++)
	{
		if (A[j][0] < x)
		{
			i++;
			Swap(A[i],A[j]);
		}
	}
	i++;
	Swap(A[i],A[r]);
	Quick_Sort(A,p,i-1);
	Quick_Sort(A,i+1,r);
}
int main()
{
	int m,n;
	while (cin>>m>>n)
	{
		if (m==-1&&n==-1)
			break;
		double** arr =new double*[n];
		for (int i=0;i<n;i++)
		{
			arr[i] = new double[3];
		}
		double maximum = 0;
		for (int i=0;i<n;i++)
		{
			cin >> arr[i][1] >> arr[i][2];
			arr[i][0] = arr[i][1]/arr[i][2];
		}
		Quick_Sort(arr,0,n-1);
		int i = n-1;
		while (m>0&&i>=0)
		{
			if (m>arr[i][2])
			{
				m -= arr[i][2];
				maximum += arr[i][1];
			}
			else
			{
				maximum += m/arr[i][2]*arr[i][1];
				m=0;
			}
			i--;
		}
		printf("%.3lf\n",maximum);
	}
	return 0;
}