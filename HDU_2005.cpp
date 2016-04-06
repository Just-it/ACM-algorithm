#include <iostream>
#include <string>
using namespace std;

int main()
{
	string st;
	int month1[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int month2[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
	while (cin>>st)
	{
		int arr[3]={0};
		int begain=0,end=0,i=0,days=0;
		st += "/";
		while (i<3)
		{
			end = st.find('/',begain);
			int pow = 1;
			for (int j=end-1;j>=begain;j--)
			{
				arr[i] += (st[j]-'0')*pow;
				pow = pow*10;
			}
			begain = end + 1;
			i++;
		}
		if (arr[0]%4 == 0)
		{
			for (int j=0;j<arr[1]-1;j++)
			{
				days += month2[j];
			}
			days += arr[2];
		}
		else
		{
			for (int j=0;j<arr[1]-1;j++)
			{
				days += month1[j];
			}
			days += arr[2];
		}
		cout << days << endl;
	}
	return 0;
}