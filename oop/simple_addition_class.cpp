#include <iostream>
using namespace std;

class Adder {
    double x, y;
public:
    Adder(double a, double b) : x(a), y(b) {}
    double compute() const { return x + y; }
};

int main() {
    double a, b;
    cout << "Enter two numbers: ";
    cin  >> a >> b;

    Adder obj(a, b);
    cout << "Sum = " << obj.compute() << endl;
    return 0;
}
