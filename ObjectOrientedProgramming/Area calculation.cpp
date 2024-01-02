#include <iostream>
#include <string>
using namespace std;

class Shape {
private:
    double firstValue, secondValue;
    string name;

public:
    Shape(string name, double firstValue, double secondValue) {
        this->name = name;
        this->firstValue = firstValue;
        this->secondValue = secondValue;
    }

    void area() {
        double area;
        if (name == "Triangle") {
            area = (firstValue * secondValue) / 2;
        } else if (name == "Square") {
            area = firstValue * secondValue;
        } else if (name == "Rhombus") {
            area = (firstValue * secondValue) / 2;
        } else if (name == "Rectangle") {
            area = firstValue * secondValue;
        } else {
            cout << "Area: Shape unknown" << endl;
            return;
        }

        cout << "Area: " << area << endl;
    }
};

int main() {
    Shape triangle("Triangle", 10, 25);
    triangle.area();
    cout << "==========================" << endl;
    Shape square("Square", 10, 10);
    square.area();
    cout << "==========================" << endl;
    Shape rhombus("Rhombus", 18, 25);
    rhombus.area();
    cout << "==========================" << endl;
    Shape rectangle("Rectangle", 15, 30);
    rectangle.area();
    cout << "==========================" << endl;
    Shape trapezium("Trapezium", 15, 30);
    trapezium.area();
    return 0;
}
