#include <iostream>
#include <string>
using namespace std;

int main()
{
	string st;
	double number,price;
	double sum=0;
	while (cin>>st>>number>>price)
	{
		sum += number*price;
	}
	printf("%.1f\n",sum);
	
	return 0;
}