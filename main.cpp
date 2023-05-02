#include <iostream>

class Bogoss {
private:
    int x;
    int y;

public:
    Bogoss(int x, int y) {
        this->x = x;
        this->y = y;
    }

    ~Bogoss()= default;

    [[nodiscard]] int getX() const {
        return x;
    }

    [[nodiscard]] int getY() const {
        return y;
    }
};

int getSumOfBogoss(const Bogoss *bg) {
    return bg->getX() + bg->getY();
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    Bogoss bg(1,2);
    std::cout << bg.getX() << std::endl;
    std::cout << bg.getY() << std::endl;
    std::cout << getSumOfBogoss(&bg) << std::endl;
    return 0;
}
