#include<iostream>
using namespace std;


void PrintArr(int a[], int n)
{
	if (n == 1)
		exit(0);
	else
	{
		int i = 0;
		for (; i < n-1; i++)
		{
			cout << a[i] << ' ';
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
	int i, n;
	int a[10] = { 0 };
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	int delnumber;
	cin >> delnumber;
	del(a, n, delnumber);
}