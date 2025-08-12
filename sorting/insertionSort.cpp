#include <iostream>
#include <vector>
using namespace std;

int insertionSort(vector<int> arr, int arrLen)
{
    for (int i = 1; i < arrLen; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }

    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}

int main()
{
    vector<int> arr = {4, 5, 3, 6, 1, 7, 8, 2, 9, 0};
    int arrLen = arr.size();
    insertionSort(arr, arrLen);
    return 0;
}