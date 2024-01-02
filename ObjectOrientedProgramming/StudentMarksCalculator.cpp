#include <iostream>

class Marks {
private:
    int mark;

public:
    Marks(int m) : mark(m) {}

    int getMark() const {
        return mark;
    }

    Marks operator+(const Marks &m) {
        int total = this->mark + m.mark;
        return Marks(total);
    }
};

int main() {
    int q1, q2, lab, mid, final;
    std::cout << "Quiz 1 (out of 10): ";
    std::cin >> q1;
    std::cout << "Quiz 2 (out of 10): ";
    std::cin >> q2;
    std::cout << "Lab (out of 30): ";
    std::cin >> lab;
    std::cout << "Mid (out of 20): ";
    std::cin >> mid;
    std::cout << "Final (out of 30): ";
    std::cin >> final;

    Marks Q1(q1), Q2(q2), Lab(lab), Mid(mid), Final(final);
    Marks total = Q1 + Q2 + Lab + Mid + Final;
    std::cout << "Total marks: " << total.getMark() << std::endl;

    return 0;
}
