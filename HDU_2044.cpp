#include <iostream>
using namespace std;
int main()
{
	int n;
	__int64 arr[50];
	int a,b;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> a >> b;
		arr[a+1]=1;
		arr[a+2]=2;
		for (int j=a+3;j<=b;j++)
			arr[j]=arr[j-1]+arr[j-2];
		cout << arr[b] << endl;
	}
	return 0;
}