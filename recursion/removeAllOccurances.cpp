#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;
void removeAllCharacters(char arr[], char x)
{
    // base case
    if (arr[0] == '\0')
    {
        return;
    }
    // recursive call
    removeAllCharacters(arr + 1, x);
    // small work
    if (arr[0] == x)
    {
        for (int i = 1; i < strlen(arr); i++)
        {
            arr[i - 1] = arr[i];
        }
    }
}
int main()
{
    char arr[] = "geeksforgeeks";
    char x = 'e';
    removeAllCharacters(arr, x);
    cout << arr << endl;
    return 0;
}