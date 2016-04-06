#include <iostream>
#include <string>
using namespace std;
string ReverString(string st)
{
	char temp;
	int len = st.length();
	for (int i=0;i<(len/2);i++)
	{
		temp = st[i];
		st[i] = st[len-1-i];
		st[len-1-i] = temp;
	}
	return st;
}
int Find_Max_String(string st)
{
	int left_value,right_value;
	string reverSt = ReverString(st);
	int len = st.length();
	if (reverSt == st)
		return len;
	left_value = Find_Max_String(st.substr(1,len-1));
	right_value = Find_Max_String(st.substr(0,len-1));
	return left_value>right_value?left_value:right_value;
}
int main()
{
	string testString;
	while (cin >> testString)
	{
		int length = Find_Max_String(testString);
		cout << length << endl;
	}
	return 0;
}