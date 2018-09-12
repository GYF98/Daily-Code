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

int sort(int a[], int n)
{
	int temp;
	int i, j;
	
	for (i = 0; i < n; i++)//控制遍历次数
	{
		for (j = 0; j < n - i - 1; j++)//控制比较的循环
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	PrintArr(a, n);
	return 0;
}

int main()
{
	int arr[10];
	int i, n;
	
	cin >> n;
	
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	sort(arr, n);
	return 0;
}