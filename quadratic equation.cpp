#include <iostream>
#include <cmath>

using namespace std;

void findRoots(double a, double b, double c) {
    // Calculate the discriminant
    double discriminant = b * b - 4 * a * c;

    // Check the value of discriminant
    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "Roots are real and same." << endl;
        cout << "Root = " << root << endl;
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and different." << endl;
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }
}

int main() {
    double a, b, c;
    cout << "Enter the coefficients of the quadratic equation (ax^2 + bx + c):" << endl;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    if (a == 0) {
        cout << "Coefficient 'a' cannot be zero for a quadratic equation." << endl;
    } else {
        findRoots(a, b, c);
    }

    return 0;
}
