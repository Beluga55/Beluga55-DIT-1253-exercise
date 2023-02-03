#include <iostream>
using namespace std;

int main(void) {
    int current__year, birth__year;
    current__year = 2022;
    birth__year = 2003;

    int age;
    age = current__year - birth__year;

    cout << "Your age is " << age << endl;
    
    return 0;
}