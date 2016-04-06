#include <iostream>
#include <string>
using namespace std;

int main()
{
	string st;
	while (getline(cin,st))
	{
		int begin=0,end=0;
		int len = st.length();
		st +=" ";
		while (end<len)
		{
			st[begin] = st[begin] - ('a'-'A');
			end = st.find(' ',begin);
			begin = end+1;
		}
		st = st.substr(0,st.length()-1);
		cout << st << endl;
	}
	return 0;
}