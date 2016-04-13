#include <iostream>
using namespace std;
int main()
{
	int T;
	int hour,minute,second;
	double angle1,angle2,angle;
	while (cin>>T)
	{
		for (int i=0;i<T;i++)
		{
			cin >> hour >> minute >> second;
			if (hour > 12)
				hour -= 12;
			angle1 = (minute*60+second)/10.0;
			angle2 = (hour*3600+minute*60+second)/120.0;
			angle = abs(angle2-angle1);
			if (angle<181)
				cout << floor(angle) <<endl;
			else
				cout << floor(360-angle) << endl;
		}
	}	
	return 0;
}