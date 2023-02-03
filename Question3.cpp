#include <iostream>
using namespace std;

int main(void) {
    // Declare Two variables
    int current__year, birth__year;
    // Print The Prompt to User To Enter Current Year
    cout << "Enter Current Year: ";
    // Take The Current Year Value That Input From The User
    cin >> current__year;
    // Print The Second Prompt To User To Enter Birth Year
    cout << "Enter Birth Year: ";
    // Take The Birth Year Value That Input From The User
    cin >> birth__year;
    
    int age;
    age = current__year - birth__year;

    cout << "Your age is " << age << endl;

    return 0;
}