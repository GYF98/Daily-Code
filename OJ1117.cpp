#include<iostream>
#include<iomanip>
using namespace std;

int find(int a[], int n, int x)
{
	int i = 0;
	for (; i < n; i++)
	{
		if (a[i] == x)
			return i;
	}
	cout << "Not Found";
	return -1;
}

void PrintArr(int a[], int n)
{
	if (n == 1)
		exit(0);
	else
	{
		int i = 0;
		for (; i < n - 1; i++)
		{
			cout << setw(4) << a[i];
		}
	}
}

void del(int a[], int n, int i)
{
	for (; i < n; i++)
	{
		a[i] = a[i + 1];
	}
	a[n] = NULL;

	PrintArr(a, n);
}

int main()
{
	int n, i;
	int arr[10];
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	int x, delnumber;
	cin >> x;
	delnumber = find(arr, n, x);
	
	if (delnumber == -1)
		return 0;
	else
		del(arr, n, delnumber);
	return 0;
}