#include <iostream>
#include <string>
#include <cstring>
using namespace std;
void printPermutations(string input, string output)
{
    // base case
    if (input.empty())
    {
        cout << output << endl;
        return;
    }
    // recursive call
    for (int i = 0; i < input.length(); i++)
    {
        printPermutations(input.substr(0, i) + input.substr(i + 1), output + input[i]);
    }
}
void printPermutations(string input)
{
    string output = "";
    printPermutations(input, output);
}
int main()
{
    string input = "cba";
    printPermutations(input);
    return 0;
}