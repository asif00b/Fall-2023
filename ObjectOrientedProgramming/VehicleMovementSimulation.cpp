#include <iostream>
#include <stdlib.h>
using namespace std;

class Vehicle {
public:
  int x, y;
  Vehicle() {
    x = 0;
    y = 0;
  }
  void moveUp() { y += 1; }
  void moveDown() { y -= 1; }
  void moveRight() { x += 1; }
  void moveLeft() { x -= 1; }
  string toString() { return "(" + to_string(x) + " , " + to_string(y) + ")"; }
};

class Vehicle2010 : public Vehicle {
public:
  void moveUpperRight() { moveRight(); moveUp(); }
  void moveUpperLeft() { moveLeft(); moveUp(); }
  void moveLowerRight() { moveRight(); moveDown(); }
  void moveLowerLeft() { moveLeft(); moveDown(); }
  bool equals(const Vehicle2010& other) const {
    return this->x == other.x && this->y == other.y;
  }
};

int main() {
  cout << "Part 1" << endl;
  cout << "------" << endl;
  Vehicle car;
  cout << car.toString() << endl;
  car.moveUp();
  cout << car.toString() << endl;
  car.moveLeft();
  cout << car.toString() << endl;
  car.moveDown();
  cout << car.toString() << endl;
  car.moveRight();
  cout << car.toString() << endl;
  cout << "------" << endl;
  cout << "Part 2" << endl;
  cout << "------" << endl;
  Vehicle2010 car1;
  cout << car1.toString() << endl;
  car1.moveLowerLeft();
  cout << car1.toString() << endl;
  Vehicle2010 car2;
  car2.moveLeft();
  cout << car2.toString() << endl;
  cout << car1.equals(car2) << endl;
  car2.moveDown();
  cout << car1.equals(car2) << endl;
  return 0;
}
