#include<iostream>
using namespace std;

void PrintArr(int a[], int n)
{
	int i = 0;
	for (; i < n; i++)
	{
		cout << a[i];
		if (i < n - 1)
			cout << ' ';
	}
	cout << endl;
}
int insert(int a[], int n, int num)
{
	int i = 0;
	
	if (num < a[0])
	{
		int j = n;
		for (; j >= 0; j--)
		{
			a[j + 1] = a[j];
		}
		a[0] = num;
		PrintArr(a, n + 1);
		return 0;
	}

	if (num > a[n - 1])
	{
		a[n] = num;
		PrintArr(a, n + 1);
		return 0;
	}

	for (; i < n; i++)
	{
		if (num >= a[i] && num <= a[i + 1])
		{
			int j = n;
			for (; j > i; j--)
			{
				a[j + 1] = a[j];
			}
			a[i + 1] = num;
			break;
		}
	}
	
	PrintArr(a, n + 1);
	return 0;
}

int main()
{
	int n, i;
	int arr[100];
	cin >> n;
	if (n == 0)
		exit(0);
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int num;
	cin >> num;
	insert(arr, n, num);
	return 0;
}