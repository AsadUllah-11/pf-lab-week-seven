#include <iostream>
using namespace std;
int digitSum(int number);
main()
{
    int number;
    cout << "Enter a Number: ";
    cin >> number;
    int result = digitSum(number);
    cout << "Sum of Digits is: " << result;
}
int digitSum(int number)
{
    int sum = 0;
    while (number != 0)
    {
        int check;
        check = number % 10;
        number = number / 10;
        sum = sum + check;
    }
    return sum;
}