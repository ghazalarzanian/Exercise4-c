#include<iostream>
using namespace std;
int main()
{
	int a,i=1,temp=1;
	bool r=0;
	cin >> a;
	while (r!=1)
	{
		temp = temp*i;
			if (temp==a)
			{
				cout << "yes";
				r = 1;
			}
			else if (temp > a)
			{
				cout << "no";
				r = 1;
			}
		i++;
	}
	return 0;
}