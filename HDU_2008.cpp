#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	while (cin>>n)
	{
		int count[3] = {0};
		if (n==0)
		{
			break;
		}
		double value;
		for (int i=0;i<n;i++)
		{
			cin >> value;
			if (value<0)
				count[0]++;
			else if(value>0)
				count[2]++;
			else
				count[1]++;
		}
		cout<<count[0]<<" "<<count[1]<<" "<<count[2]<<endl;
	}
	return 0;
}