#include <iostream>
using namespace std;
int get_max_common(int x,int y)
{
	int temp;
	while (x>0)
	{
		temp = x;
		x = y%x;
		y = temp;
	}
	return temp;
}
int main()
{
	int a,b;
	int max_common;
	while (cin >> a >> b)
	{
		if (a<b)
			max_common = get_max_common(a,b);
		else
			max_common = get_max_common(b,a);
		cout << (a*b)/max_common << endl;
	}
	return 0;
}