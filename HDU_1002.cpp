#include <iostream>
#define N 1001
using namespace std;
int Get_Length(const char *str);
void Reverse_String(char s[],int n);
int main()
{
	int loop;
	int result;
	while (cin >> loop)
	{
		for (int i=1;i<=loop;i++)
		{
			char A[N],B[N];
			char C[1003];
			cin >> A >> B;
			cout << "Case " << i <<":"<<endl;
			cout << A << " + " << B << " = ";
			int A_length = Get_Length(A);
			int B_length = Get_Length(B);
			int length = A_length>B_length?A_length:B_length;
			Reverse_String(A,A_length);
			Reverse_String(B,B_length);
			int remaind_digit = 0;
			int carry_digit = 0;
			for (int i=0;i<length;i++)
			{
				if (length>A_length&&i>=A_length)
				{
					result = B[i]-'0'+carry_digit;
				}
				else if (length>B_length&&i>=B_length)
				{
					result = A[i]-'0'+carry_digit;
				}
				else
					result = A[i]+B[i]-'0'-'0'+carry_digit;
				C[i] = result % 10 + '0';
				carry_digit = result / 10;
			}
			if (carry_digit != 0)
			{
				C[length++] = carry_digit + '0';
			}
			Reverse_String(C,length);
			C[length] = '\0';
			cout << C <<endl;
		}
	}
	return 0;
}
int Get_Length(const char *str)
{
	int length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return length;
}
void Reverse_String(char s[],int n)
{
	int temp;
	for (int i=0;i<(n+1)/2;i++)
	{
		temp = s[i];
		s[i] = s[n-1-i];
		s[n-1-i] = temp;
	}
}