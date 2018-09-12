//忽略因为非GCC编译器导致的错误
#include<iostream>
using namespace std;

int a[1000000];
int b[1000000];

int main()
{
	int m = 0;
	int n = 0;
	int i;
	
	cin >> m;
	for (i = 0; i < m; i++)
	{
		cin >> a[i];
	}
	
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> b[i];
	}

	int arr[m + n];
	int p = m;
	int q = 0;
	for (i = 0; i < m + n; i++)
	{
		if (a[p - 1] > b[q])
		{
			arr[i] = a[p - 1];
			p = p - 1;
		}
		else
		{
			arr[i] = b[q];
			q = q + 1;
		}
	}

	for (i = 0; i < m + n; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
	return 0;
}