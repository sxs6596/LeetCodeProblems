#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;
int length(char input[])
{
    int len = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}

int stringToNumber(char input[], int last)
{
    // Base Case
    if (last == 0)
    {
        return input[last] - '0';
    }
    // Recursive Call
    int smallAns = stringToNumber(input, last - 1);

    // small work
    int a = input[last] - '0';
    return smallAns * 10 + a;
}

int stringToNumber(char input[])
{
    int len = length(input);
    return stringToNumber(input, len - 1); // last index
}
int main()
{
    char input[] = "123456";
    cout << stringToNumber(input) << endl;
    return 0;
}