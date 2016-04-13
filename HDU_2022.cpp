#include <iostream>
using namespace std;

int main()
{
	int n,m;
	int score,MM_score,x,y;
	while (cin>>m>>n)
	{
		for (int i=1;i<=m;i++)
		{
			for (int j=1;j<=n;j++)
			{
				cin >> score;
				if (i==1&&j==1)
				{
					MM_score = score;
					x = 1;
					y = 1;
				}
				if (abs(score)>abs(MM_score))
				{
					MM_score = score;
					x = i;
					y = j;
				}
			}
		}
		cout <<x<<" "<<y<<" "<<MM_score<<endl;
	}	
	return 0;
}