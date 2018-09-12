#include<iostream>
using namespace std;
int main()
{
	int n, i;
	int arr[1000];
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int floor = arr[0];
	int second = floor * 6 + 5;
	
	for (i = 1; i < n; i++)
	{
		if (arr[i] >= floor)
		{
			second += (arr[i] - floor) * 6 + 5;
		}
		else
		{
			second += (floor - arr[i]) * 4 + 5;
		}
		floor = arr[i];
	}
	cout << second << endl;
}