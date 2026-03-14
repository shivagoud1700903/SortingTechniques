#include<iostream>
#include<vector>
using namespace std;

void selectionsort(vector<int>& arr)
{
	int n = (int)arr.size();
		for(int i = 0; i < n - 1; i++)
		{
			int min = i;
			for (int j = i; j < n; j++)
			{
				if (arr[j] < arr[min])
				{
					int temp = arr[j];
					arr[j] = arr[min];
					arr[min] = temp;
				}
			}
	    }
}