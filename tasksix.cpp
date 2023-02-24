#include <iostream>
using namespace std;
int GCD(int number1, int number2);
int LCM(int number1, int number2);
main()
{
    int number1, number2;
    cout << "Enter First Number: ";
    cin >> number1;
    cout << "Enter Second Number: ";
    cin >> number2;
}
int GCD(int number1, int number2)
{
    int number = 1;
    int check = 0;
    while (check != 0)
    {
        check = number1 % number;
        number++;
    }
}
