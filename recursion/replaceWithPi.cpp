#include <iostream>
#include <string>
#include <cstring>
using namespace std;
void replaceWithPi(char str[], int start)
{
    // base case.
    if (str[start] == '\0' or str[start + 1] == '\0')
    {
        return;
    }
    // recursive call.
    replaceWithPi(str, start + 1);

    // small work.
    if (str[start] == 'p' and str[start + 1] == 'i')
    {
        for (int i = strlen(str); i >= start + 2; i--)
        {
            str[i + 2] = str[i];
        }
        str[start] = '3';
        str[start + 1] = '.';
        str[start + 2] = '1';
        str[start + 3] = '4';
    }
}
int main()
{
    char str[] = "pippppiiiipipi";
    replaceWithPi(str, 0);
    cout << str << endl;
    return 0;
}