#include <iostream>
#include <vector>
using namespace std;

int bubbleSort(vector<int> arr, int arrLen)
{
    for (int i = arrLen - 1; i >= 0; i--)
    {
        int isSorted = 1;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                isSorted = 0;
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        if (isSorted == 1)
        {
            break;
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
    bubbleSort(arr, arrLen);
    return 0;
}