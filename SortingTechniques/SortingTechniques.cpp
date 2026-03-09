#include<vector>
#include<iostream>
using namespace std;

class solution {
public:

    vector<int> selectionsort(vector<int>& arr)
    {
        int n = arr.size();
        for (int i = 0;i < n - 1;i++)
        {
            int min = i;
            for (int j = i;j < n;j++)
            {
                if (arr[j] < arr[min]) min = j;
            }
            int temp = 0;
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
        return arr;
    }

    vector<int> bubblesort(vector<int>& arr)
    {
        int n = arr.size();
        for (int i = n - 1;i >= 0;i--)
        {
            int didswap = 0;
            for (int j = 0;j <= i - 1;j++)
            {
                int temp = 0;
                if (arr[j] > arr[j + 1])
                {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    didswap = 1;
                }

            }
            if (didswap == 0)
            {
                return arr;
            }
        }
        return arr;
    }
};

int main() {
    vector<int> nums = { 23,14,57,34,98,54,13 };
    vector<int> nums1 = { 24,45,12,1,34,2,9,0 };
    solution sol;
    sol.selectionsort(nums);
    for (int i = 0;i < nums.size();i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    sol.bubblesort(nums1);
    for (int i = 0;i < nums1.size();i++)
    {
        cout << nums1[i] << " ";
    }

}
