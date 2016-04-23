#include <iostream>
#include <string>
using namespace std;

int main()
{
	string arr;
	string st;
	char max_char;
	int length;
	while (cin>>arr)
	{
		length = arr.length();
		max_char = 'a';
		st = "";
		for (int i=0;i<length;i++)
		{
			if (max_char < arr[i])
				max_char = arr[i];
		}
		for (int i=0;i<length;i++)
		{
			st += arr[i];
			if (max_char == arr[i])
				st += "(max)";	
		}
		cout << st << endl;
	}	
	return 0;
}