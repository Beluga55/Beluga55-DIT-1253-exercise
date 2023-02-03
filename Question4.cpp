#include <iostream>
using namespace std;

int main(void)
{
    int first__number, second__number, third__number, sum;
    cout << "Enter first number: ";
    cin >> first__number;
    cout << "Enter second number: ";
    cin >> second__number;
    cout << "Enter third number: ";
    cin >> third__number;

    sum = first__number + second__number + third__number;
    cout << "The sum of" << endl;
    cout << first__number << ", " << second__number << ", " << "and " << third__number << endl;
    cout << "is " << sum << endl;

    return 0;
}
