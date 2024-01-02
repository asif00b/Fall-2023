#include<iostream>
using namespace std;

class Rectangle {
public:
    double height;
    double width;
    double length;

    // Default constructor
    Rectangle() {
        height = 1.0;
        width = 1.0;
        length = 1.0;
    }

    // Parameterized constructor
    Rectangle(double h, double w, double l) {
        height = h;
        width = w;
        length = l;
    }

    double Area() {
        return length * width;
    }

    double Volume() {
        return height * width * length;
    }
};

int main() {
    // Object creation using default constructor
    Rectangle rect1;
    cout << "Area of rectangle (default constructor): " << rect1.Area() << endl;
    cout << "Volume of rectangle (default constructor): " << rect1.Volume() << endl;

    // Object creation using parameterized constructor
    Rectangle rect2(2.0, 3.0, 4.0);
    cout << "Area of rectangle (parameterized constructor): " << rect2.Area() << endl;
    cout << "Volume of rectangle (parameterized constructor): " << rect2.Volume() << endl;

    // Object creation using user input
    double h, w, l;
    cout << "Enter height, width and length: ";
    cin >> h >> w >> l;
    Rectangle rect3(h, w, l);
    cout << "Area of rectangle (user input): " << rect3.Area() << endl;
    cout << "Volume of rectangle (user input): " << rect3.Volume() << endl;

    return 0;
}
