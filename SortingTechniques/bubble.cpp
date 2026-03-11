#include<iostream>
#include<vector>
using namespace std;

void bubblesort(vector<int>& arr)
{
	int n = (int)arr.size();
	for (int i = n - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}