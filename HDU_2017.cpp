#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	while (cin>>n)
	{
		for (int i=1;i<=n;i++)
		{
			int count = 0;
			string st;
			cin >> st;
			int len=st.length();
			for (int j=0;j<len;j++)
			{
				if (st[j]>='0'&&st[j]<='9')
					count++;
			}
			cout << count<<endl;
		}
	}
	return 0;
}