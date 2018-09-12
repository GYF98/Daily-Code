#include<iostream>
using namespace std;

int MinIndex(int a[], int n)
{
	int i = 0;
	int min = a[0];
	int minIndex = 0;
	for (; i < n; i++)
	{
		if (a[i] < min)
		{
			minIndex = i;
			min = a[i];
		}
	}
	return minIndex;
}

int MaxIndex(int a[], int n)
{
	int i = 0;
	int max = a[0];
	int maxIndex = 0;
	for (; i < n; i++)
	{
		if (a[i] > max)
		{
			maxIndex = i;
			max = a[i];
		}
	}
	return maxIndex;
}
	
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

int main()
{
	int arr[10];
	int n, i;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int temp, maxIndex, minIndex;

	minIndex = MinIndex(arr, n);
	temp = arr[0];
	arr[0] = arr[minIndex];
	arr[minIndex] = temp;

	maxIndex = MaxIndex(arr, n);
	temp = arr[n - 1];
	arr[n - 1] = arr[maxIndex];
	arr[maxIndex] = temp;

	PrintArr(arr, n);
	return 0;

}