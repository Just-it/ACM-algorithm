#include <iostream>
using namespace std;
int main()
{
	int n,m;
	int value,sum;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			sum=0;
			cin >> m;
			for(int j=0;j<m;j++)
			{
				cin >> value;
				sum += value;
			}
			cout << sum  << endl;
		}
	}
	return 0;
}