#include <iostream>
using namespace std;
int totalDigits(int number);
main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int result;
    result = totalDigits(number);
    cout << "Total Digits are: " << result;
}
int totalDigits(int number)
{
    int digit = 0;
    if (number == 0)
    {
        digit = 1;
    }
    while (number != 0)
    {
        digit = digit + 1;
        number = number / 10;
    }

    return digit;
}