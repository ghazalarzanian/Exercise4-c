#include<iostream>
using namespace std;
int main()
{
	int a, b,temp=0,temp1=0;
	bool result = true;
	int i = 1, j = 1;
	cin >> a >> b;
	while (result)
	{ 
		temp = a * i;
		while (temp > temp1)
		{
			temp1 = b * j;
			j++;
		}
		if (temp == temp1)
		{
			cout << temp1;
			result = false;
		}
		i++;

	}
	return 0;
}