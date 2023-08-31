#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int countZeros(int n)
{
    // base case
    if (n == 0)
    {
        return 0;
    }
    // recursive call
    if (n % 10 == 0)
    {
        return countZeros(n / 10) + 1;
    }
    else
    {
        return countZeros(n / 10);
    }
    // small work.
}
int main()
{
    int num = 708000;
    int value = countZeros(num);
    cout << value << endl;
    return 0;
}