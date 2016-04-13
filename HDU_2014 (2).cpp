#include <iostream>
using namespace std;
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
}
int main()
{
	int n;
	double sum,d_st[100];
	while (cin>>n)
	{
		sum = 0;
		for (int i=0;i<n;i++)
		{
			cin >> d_st[i];
			sum += d_st[i];
		}
		Quick_Sort(d_st,0,n-1);
		sum = (sum-d_st[0]-d_st[n-1])/(n-2);
		printf("%.2lf\n",sum);
	}	
	return 0;
}