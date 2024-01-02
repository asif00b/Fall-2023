
#include <iostream>
#include <string>
#include <unordered_map>

class Color {
private:
    std::unordered_map<std::string, std::string> colorCombination = {
        {"redblue", "Violet"},
        {"bluered", "Violet"},
        {"redyellow", "Orange"},
        {"yellowred", "Orange"},
        {"blueyellow", "Green"},
        {"yellowblue", "Green"}
    };

    std::string color;

public:
    Color(const std::string& c) : color(c) {}

    Color operator+(const Color& c) {
        std::string combinedColor = color + c.color;
        if (colorCombination.find(combinedColor) != colorCombination.end()) {
            return Color(colorCombination[combinedColor]);
        }
        return Color("Unknown");
    }

    std::string getColor() const {
        return color;
    }
};

Color readColor() {
    std::string input;
    std::cout << "Enter Color: ";
    std::cin >> input;
    return Color(input);
}

int main() {
    Color C1 = readColor();
    Color C2 = readColor();
    Color C3 = C1 + C2;

    std::cout << "Color formed: " << C3.getColor() << std::endl;

    return 0;
}
