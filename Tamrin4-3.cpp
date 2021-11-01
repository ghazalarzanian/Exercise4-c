#include<iostream>
using namespace std;
int main()
{
	int a, b,temp=0;
	cin >> a >> b;
	if (a < b)
	{
		temp = b;
		b = a;
		a = temp;

	}
	temp = 0;
	for (int i = 1;i < a;i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			temp = i;
		}
	}
	if (temp)
	{
		cout << temp;
	}
	return 0;
}