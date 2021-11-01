#include<iostream>
using namespace std;
int main()
{
	int m, n;
	cin >> n >> m;
	for (int i = 0;i < n;i++)
	{
		
		for (int j = 0;j < m;j++)
		{
			if(i%2==0){
			if (j % 2 == 1)
				cout << "#";
			else cout << "*";
			}
			else
			{
				if (j % 2 == 1)
					cout << "*";
				else cout << "#";
			}
		}
		cout << '\n';
	}
	return 0;
}