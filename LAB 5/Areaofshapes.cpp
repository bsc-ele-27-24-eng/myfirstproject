#include <iostream>
using namespace std;

// Functions
double triangleArea(double base, double height) {
    return 0.5 * base * height;
}

double rectangleArea(double length, double width) {
    return length * width;
}

double squareArea(double side) {
    return side * side;
}

int main() {
    int choice;

    while (true) {
        cout << "\nChoose a shape:\n";
        cout << "1. Triangle\n2. Rectangle\n3. Square\n4. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 4) break;

        if (choice == 1) {
            double base, height;
            cout << "Enter base and height: ";
            cin >> base >> height;
            cout << "Area = " << triangleArea(base, height) << endl;
        }
        else if (choice == 2) {
            double length, width;
            cout << "Enter length and width: ";
            cin >> length >> width;
            cout << "Area = " << rectangleArea(length, width) << endl;
        }
        else if (choice == 3) {
            double side;
            cout << "Enter side: ";
            cin >> side;
            cout << "Area = " << squareArea(side) << endl;
        }
        else {
            cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}