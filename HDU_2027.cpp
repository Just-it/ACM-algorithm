#include <iostream>
#include <string>
using namespace std;
void test(string arr)
{
	int length = arr.length();
	int au[5]={0};
	for (int i=0;i<length;i++)
	{
		switch (arr[i])
		{
		case 'a':
			au[0]++;break;
		case 'e':
			au[1]++;break;
		case 'i':
			au[2]++;break;
		case 'o':
			au[3]++;break;
		case 'u':
			au[4]++;break;
		default:
			break;
		}
	}
	cout <<"a:"<<au[0]<<endl;
	cout <<"e:"<<au[1]<<endl;
	cout <<"i:"<<au[2]<<endl;
	cout <<"o:"<<au[3]<<endl;
	cout <<"u:"<<au[4]<<endl;
}
int main()
{
	string st;
	int n;
	while (cin>>n)
	{
		getchar();
		for (int i=0;i<n;i++)
		{
			getline(cin,st);
			test(st);
			if (i<n-1)
				cout << endl;
		}
	}	
	return 0;
}