/*
  在这里说明思路
  这道题用数组的下标来记录序号，用数组本身的数字记录序号出现的次数
*/
#include<iostream>
using namespace std;
int main()
{
	int arr[100] = {0};
	int num, i;

	while (cin >> num, num >= 0)
	{
		arr[num]++;
	}

	int max = arr[0];

	for (i = 0; i < 100; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}

	int flag = 0;
	for (i = 0; i < 100; i++)
	{
		if (arr[i] == max && flag == 0)
		{
			cout << i;
			flag = 1;
		}
		else if (arr[i] == max && flag != 0)
			cout << ' ' << i;
	}
	return 0;
}