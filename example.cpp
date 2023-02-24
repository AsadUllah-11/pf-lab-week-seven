#include <iostream>
using namespace std;
int counting(int number);
main()
{
    int number;
    cout << "Enter a Number: ";
    cin >> number;
    int result;
    result = counting(number);
    cout << "Total: " << result;
}
int counting(int number)
{
    int sum = 0;

    for (int count = 1; count <= number; count++)
    {
        sum = sum + count;
        cout << "Sum is: " << sum << endl;
        }
    return sum;
}