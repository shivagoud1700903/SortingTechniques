#include<vector>
#include<iostream>
using namespace std;

void Insertionsort(vector<int>& arr)
{
	for (int i = 0;i < arr.size();i++)
	{
		int j = i;
		while (j > 0)
		{
			if (arr[j] < arr[j - 1])
			{
				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
			j--;
		}
	}
}