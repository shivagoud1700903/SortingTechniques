#include<vector>
#include<iostream>
using namespace std;

//class solution {
//public:
//    vector<int> bubblesort(vector<int>& arr)
//    {
//        int n = arr.size();
//        for (int i = n - 1;i >= 0;i--)
//        {
//            int didswap = 0;
//            for (int j = 0;j <= i - 1;j++)
//            {
//                int temp = 0;
//                if (arr[j] > arr[j + 1])
//                {
//                    temp = arr[j];
//                    arr[j] = arr[j + 1];
//                    arr[j + 1] = temp;
//                    didswap = 1;
//                }
//
//            }
//            if (didswap == 0)
//            {
//                return arr;
//            }
//        }
//        return arr;
//    }
//};

void selectionsort(vector<int>& arr);
void bubblesort(vector<int>& arr);
void Insertionsort(vector<int>& arr);
void MergeSort(vector<int>& arr);
void QuickSort(vector<int>& arr,int low,int high);

int main() {
    vector<int> nums = { 23,14,57,34,98,54,13 };
    vector<int> nums1 = { 24,45,12,1,34,2,9,0 };
    vector<int> nums2 = { 9,8,7,6,5,4,3,2,1 };

 /*   for (int i = 0;i < nums.size();i++)
    {
        cout << nums[i] << " ";
    }

    cout << endl;

    selectionsort(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }


    cout << endl;

    bubblesort(nums1);
    for (int i = 0;i < nums1.size();i++)
    {
        cout << nums1[i] << " ";
    }

    cout << endl;*/

  /*  Insertionsort(nums2);
    for (int i = 0;i < nums2.size();i++)
    {
        cout << nums2[i] << " ";
    }*/

   /* for (int i = 0;i < nums2.size();i++)
    {
        cout << nums2[i] << " ";
    }
    cout << endl;*/
   /* MergeSort(nums2);
    for (int i = 0;i < nums2.size();i++)
    {
        cout << nums2[i] << " ";
    }*/

    cout << endl;



    QuickSort(nums2, 0, (int)nums2.size() - 1);

    for (int i = 0;i < nums2.size();i++)
    {
        cout << nums2[i] << " ";
    }

}
