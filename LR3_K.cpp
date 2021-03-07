#include <iostream>
using namespace std;

class Square {
protected:
    double a;
public:
    Square() {
        a = 0;
    }
    Square(double a) {
        this->a = a;
    }
    double S() {
        return (a * a);
    }
    virtual void print() {
        cout << a << ", " << S() << endl;
    }
    virtual ~Square() {};
};

class Cube : public Square {
public:
    Cube() :Square() {}
    Cube(double a) :Square(a) {}
    double S() {
        return (Square::S() * a);
    }
    void print() override {
        cout << a << ",  " << S() << endl;
    }
    ~Cube() {}
};

int main()
{
    Square A(3);
    A.print();

    Cube B(6.9);
    B.print();

    Square* C;
    C = &B;
    C->print();
}