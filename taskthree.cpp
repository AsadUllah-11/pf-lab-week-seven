#include <iostream>
using namespace std;
int frequencyChecker(int number, int digit);
main()
{
    int number, digit;
    cout << "Enter a Number: ";
    cin >> number;
    cout << "Enter Digit for frequency: ";
    cin >> digit;
    int result;
    result = frequencyChecker(number, digit);
    cout << "Frequency of " << digit << " in " << number << " is: " << result;
}
int frequencyChecker(int number, int digit)
{
    int frequency = 0;
    while (number != 0)
    {
        int check;
        check = number % 10;
        number = number / 10;

        if (check == digit)
        {
            frequency = frequency + 1;
        }
    }
    return frequency;
}