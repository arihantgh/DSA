#include <iostream>
#include <vector>
using namespace std;

int brute(vector<int> arr, int arrLen, int k)
{
    // generate all subarrays
    int largest = 0;
    for (int i = 0; i < arrLen; i++)
    {
        int sum = 0;
        for (int j = i; j < arrLen; j++)
        {
            sum += arr[j];
            if (sum == k)
            {
                largest = max(largest, (j - i + 1));
            }
        }
    }
    return largest;
}

int better() {
    // hashing
    // bit complex - not confident
    return 0;
}

int main()
{
    vector<int> arr = {4, 1, 1, 1, 5, 6, 1, 7, 8, 2, 9, 0};
    int k = 7;
    int arrLen = arr.size();
    cout << brute(arr, arrLen, k);
    return 0;
}