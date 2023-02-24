#include <iostream>
using namespace std;
void printTable(int number);
main()
{
    int number;
    cout << "Enter a number for table: ";
    cin >> number;
    printTable(number);
}
void printTable(int number)
{
    for (int condition = 1; condition <= 10; condition++)
    {
        cout << number << " * " << condition << " = " << number * condition << endl;
    }
}