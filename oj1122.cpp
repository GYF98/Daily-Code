#include<iostream>
using namespace std;
int main()
{
	int n, m, i, j;
	int arr[1000];
	cin >> n;
	m = n;
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			int temp = 0;
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (i = 0; i < n; i++)
	{
		if ((arr[i] == arr[i + 1]) && arr[i + 1] > 0)
		{
			for (j = i; j < n; j++)
			{
				arr[j] = arr[j + 1];
			}
			i = i - 1;
			m = m - 1;
		}
	}

	cout << m << endl;

	for (i = 0; i < m; i++)
		cout << arr[i] << ' ';

	cout << endl;
	return 0;
}