#include <iostream>
#include <string>
using namespace std;

int main()
{
	char st[4];
	int value;
	int i,j;
	while (cin>>st)
	{
		for (i=1;i<3;i++)
		{
			value = st[i];
			if (value<st[i-1])
			{
				for (j=i-1;j>=0&&value<st[j];j--)
				{
					st[j+1]=st[j];
				}
				st[j+1] = value;
			}
		}
		for (int k=0;k<3;k++)
		{
			cout << st[k];
			if (k==2)
				cout << "\n";
			else
				cout << " ";
		}
	}
	return 0;
}