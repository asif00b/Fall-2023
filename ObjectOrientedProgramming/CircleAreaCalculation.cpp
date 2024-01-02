
#include <iostream>
#include <cmath>

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double getRadius() const {
        return radius;
    }

    void setRadius(double r) {
        radius = r;
    }

    double getArea() const {
        return M_PI * radius * radius;
    }

    Circle operator+(const Circle& c) {
        double newRadius = this->radius + c.radius;
        return Circle(newRadius);
    }
};

int main() {
    Circle c1(4);
    std::cout << "First circle radius: " << c1.getRadius() << std::endl;
    std::cout << "First circle area: " << c1.getArea() << std::endl;

    Circle c2(5);
    std::cout << "Second circle radius: " << c2.getRadius() << std::endl;
    std::cout << "Second circle area: " << c2.getArea() << std::endl;

    Circle c3 = c1 + c2;
    std::cout << "Third circle radius: " << c3.getRadius() << std::endl;
    std::cout << "Third circle area: " << c3.getArea() << std::endl;

    return 0;
}
