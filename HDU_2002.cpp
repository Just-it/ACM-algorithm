#include <iostream>
#include <math.h>
#define PI 3.1415927
using namespace std;
int main()
{
	double radius;
	double volume;
	while (cin>>radius)
	{
		volume = (4.0/3)*PI*pow(radius,3);
		printf("%.3lf\n",volume);
	}
	return 0;
}