#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int firstElementIndex(int arr[], int n, int e)
{
    // base case -- if the array is empty.
    if (n == 0)
    {
        return -1;
    }
    // this is the small work as we work on the first index.
    else if (arr[0] == e)
    {
        return 0;
    }
    // recursive call
    int smallAns = firstElementIndex(arr + 1, n - 1, e);
    // if the element is not found in the array.
    if (smallAns == -1)
    {
        return -1;
    }
    else
    {
        return smallAns + 1;
    }
}
int main()
{
    int arr[] = {9, 8, 10, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int e = 100;
    cout << firstElementIndex(arr, n, e) << endl;
    return 0;
}