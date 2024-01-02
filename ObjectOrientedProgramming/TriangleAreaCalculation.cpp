
#include <iostream>

class Triangle {
private:
    double base;
    double height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    double getBase() const {
        return base;
    }

    double getHeight() const {
        return height;
    }

    void setBase(double b) {
        base = b;
    }

    void setHeight(double h) {
        height = h;
    }

    double calcArea() const {
        return 0.5 * base * height;
    }

    Triangle operator-(const Triangle& t) {
        double newBase = (base > t.base) ? base - t.base : t.base - base;
        double newHeight = (height > t.height) ? height - t.height : t.height - height;
        return Triangle(newBase, newHeight);
    }
};

int main() {
    Triangle t1(10, 5);
    std::cout << "First Triangle Base: " << t1.getBase() << std::endl;
    std::cout << "First Triangle Height: " << t1.getHeight() << std::endl;
    std::cout << "First Triangle area: " << t1.calcArea() << std::endl;

    Triangle t2(5, 3);
    std::cout << "Second Triangle Base: " << t2.getBase() << std::endl;
    std::cout << "Second Triangle Height: " << t2.getHeight() << std::endl;
    std::cout << "Second Triangle area: " << t2.calcArea() << std::endl;

    Triangle t3 = t1 - t2;
    std::cout << "Third Triangle Base: " << t3.getBase() << std::endl;
    std::cout << "Third Triangle Height: " << t3.getHeight() << std::endl;
    std::cout << "Third Triangle area: " << t3.calcArea() << std::endl;

    return 0;
}
