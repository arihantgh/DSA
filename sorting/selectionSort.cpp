#include <iostream>
#include <vector>
using namespace std;

int selectionSort(vector<int> arr, int arrLen)
{
    for (int i = 0; i < arrLen; i++)
    {
        int min = i; // carry index
        for (int j = i; j < arrLen; j++)
        {
            if (arr[min] > arr[j]) // < for descending
            {
                min = j;
            }
        }
        // swap using temp
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
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
    selectionSort(arr, arrLen);
    return 0;
}
