#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

// NOTE : CONVERT THE INTEGER CHARACTER TO THE RESPECTIVE ALPHABET BY BELOW FORMULA.

// ch - '0' + 'a' - 1.
void printPossibleDecoding(string input, string output)
{
    // base case
    if (input.empty())
    {
        cout << output << endl;
        return;
    }
    // recursive call
    // 1. consider only one character.
    char ch = input[0] - '0' + 'a' - 1;
    printPossibleDecoding(input.substr(1), output + ch);
    // 2. consider two characters.
    int val = stoi(input.substr(0, 2));
    char ch2 = val + 'a' - 1; // corresponding alphabet.
    if (val >= 10 && val <= 26)
    {
        printPossibleDecoding(input.substr(2), output + ch2);
    }
}
void printPossibleDecoding(string input)
{
    string output = "";
    printPossibleDecoding(input, output);
}

int main()
{
    string input = "1123";
    printPossibleDecoding(input);
    return 0;
}
