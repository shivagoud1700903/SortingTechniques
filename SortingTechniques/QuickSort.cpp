#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& arr, int low, int high)
{
	int i = low;
	int j = high;
	while (i < j)
	{
		while (arr[i] <= arr[low] && i <= high - 1)
		{
			i++;
		}
		while (arr[j] > arr[low] && j >= low + 1)
		{
			j--;
		}
		if (i < j) swap(arr[i], arr[j]);
	
	}
	swap(arr[low], arr[j]);
	return j;
}

void QuickSort(vector<int>& arr, int low , int high)
{
	if (low < high) {
		int partitionidx = partition(arr, low, high);
		QuickSort(arr, low, partitionidx - 1);
		QuickSort(arr, partitionidx + 1, high);
	}
}