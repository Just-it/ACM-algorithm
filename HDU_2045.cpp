#include <iostream>
using namespace std;
int main()
{
	int n;
	__int64 arr[51];
	arr[1]=3;
	arr[2]=6;
	arr[3]=6;
	for (int i=4;i<=50;i++)
		arr[i] = arr[i-1]+2*arr[i-2];
	while (cin>>n)
	{
		cout<<arr[n]<<endl;
	}
	return 0;
}