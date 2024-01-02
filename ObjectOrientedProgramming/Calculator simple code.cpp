#include <iostream>
#include <string>
using namespace std;

class Calculator {
private:
    float firstValue, secondValue, calculation;
    string operatorSign;

public:
    Calculator() {
        cout << "Calculator is ready!" << endl;
    }

    float calculate(float firstValue, float secondValue, string operatorSign) {
        this->firstValue = firstValue;
        this->secondValue = secondValue;
        this->operatorSign = operatorSign;

        if (operatorSign == "+") {
            calculation = firstValue + secondValue;
        } else if (operatorSign == "-") {
            calculation = firstValue - secondValue;
        } else if (operatorSign == "*") {
            calculation = firstValue * secondValue;
        } else if (operatorSign == "/") {
            calculation = firstValue / secondValue;
        }

        return calculation;
    }

    void showCalculation() {
        cout << firstValue << " " << operatorSign << " " << secondValue << " = " << calculation << endl;
    }
};

int main() {
    Calculator c1;
    float val = 0;

    cout << "==================" << endl;
    val = c1.calculate(10, 20, "+");
    cout << "Returned value: " << val << endl;
    c1.showCalculation();

    cout << "==================" << endl;
    val = c1.calculate(val, 10, "-");
    cout << "Returned value: " << val << endl;
    c1.showCalculation();

    cout << "==================" << endl;
    val = c1.calculate(val, 5, "*");
    cout << "Returned value: " << val << endl;
    c1.showCalculation();

    cout << "==================" << endl;
    val = c1.calculate(val, 16, "/");
    cout << "Returned value: " << val << endl;
    c1.showCalculation();

    return 0;
}
