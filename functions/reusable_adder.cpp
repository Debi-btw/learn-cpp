#include <iostream>
using namespace std;

double add(double x, double y) {   // function definition
    return x + y;
}

int main() {
    double a, b;
    cout << "Enter two numbers: ";
    cin  >> a >> b;
    cout << "Sum = " << add(a, b) << endl;
    return 0;
}
