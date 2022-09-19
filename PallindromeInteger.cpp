// Problem Statement
// Given an integer x , return true if x is palindrome integer.
// An integer is a palindrome when it reads the same backward as forward.
// For example, 121 is a palindrome while 123 is not.

#include <iostream>
using namespace std;

bool palindrome(int n)
{
    int temp = n, result = 0;
    if (n < 0)
        return false;

    while (temp)
    {
        int r = temp % 10;
        result = result * 10 + r;
        temp /= 10;
    }

    if (result == n)
        return true;

    return false;
}

int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    if (palindrome(num))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}