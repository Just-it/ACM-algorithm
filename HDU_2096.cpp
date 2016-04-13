#include <iostream>
#include <string>
using namespace std;

int main()
{
	int T;
	int x,y,sum;
	while (cin>>T)
	{
		for (int i=0;i<T;i++)
		{
			cin >> x >> y;
			sum = (x%100) +(y%100);
			sum = sum%100;
			cout << sum <<endl;
		}
	}	
	return 0;
}