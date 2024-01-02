
#include <iostream>
#include <string>

class Coordinates {
private:
    int x;
    int y;

public:
    Coordinates(int x_val, int y_val) : x(x_val), y(y_val) {}

    int getX() const {
        return x;
    }

    int getY() const {
        return y;
    }

    Coordinates operator-(const Coordinates& c) {
        int new_x = this->x - c.x;
        int new_y = this->y - c.y;
        return Coordinates(new_x, new_y);
    }

    Coordinates operator*(const Coordinates& c) {
        int new_x = this->x * c.x;
        int new_y = this->y * c.y;
        return Coordinates(new_x, new_y);
    }

    std::string checkEqual(const Coordinates& c) {
        return (this->x == c.x && this->y == c.y) ? "Points are equal" : "Points are not equal";
    }
};

int main() {
    int x1, y1, x2, y2;
    std::cin >> x1 >> y1;
    Coordinates p1(x1, y1);

    std::cin >> x2 >> y2;
    Coordinates p2(x2, y2);

    Coordinates p4 = p1 - p2;
    std::cout << "Result of subtraction: (" << p4.getX() << ", " << p4.getY() << ")" << std::endl;

    Coordinates p5 = p1 * p2;
    std::cout << "Result of multiplication: (" << p5.getX() << ", " << p5.getY() << ")" << std::endl;

    std::string point_check = p4.checkEqual(p5);
    std::cout << point_check << std::endl;

    return 0;
}
