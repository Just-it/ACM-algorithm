#include <iostream>
using namespace std;
int Get_number(int value)
{
	int x=0;
	x += value/100;
	value = value%100;
	x += value/50;
	value = value%50;
	x += value/10;
	value = value%10;
	x += value/5;
	value = value%5;
	x += value/2;
	value = value%2;
	x += value/1;
	return x;
}
int main()
{
	int n;
	int salary,counting;
	while (cin>>n)
	{
		if (0==n)
			break;
		counting = 0;
		for (int i=0;i<n;i++)
		{
			cin >> salary;
			counting += Get_number(salary);
		}
		cout << counting <<endl;
	}	
	return 0;
}