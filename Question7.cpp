#include <iostream>
using namespace std;

int main() {
    int length, width, area, perimeter;
    cout << "Enter The Length: ";
    cin >> length;
    cout << "Enter The Width: ";
    cin >> width;

    area = length * width;
    perimeter = 2 * (length + width);

    cout << "The Area Of The Rectangle Is: " << area << endl;
    cout << "The Perimeter Of The Rectangle Is: " << perimeter << endl;

    return 0;
}