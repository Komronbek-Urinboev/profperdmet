#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x = 1.2, y = 2.1, z = 0.7; 
    double beta = sqrt(10 * (cbrt(x) + pow(x, y + 2))) * fabs(pow(asin(z), 2) - fabs(x - y));
    double gamma = (5 * atan(x) - 0.25 * acos(x)) * (pow(x + 3 * fabs(x - y) + pow(x, 2), 1) / (fabs(x - y) * z + pow(x, 2)));
    double phi = (exp(fabs(x - y)) * pow(fabs(x - y), x + y)) / (atan(x) + atan(z)) + cbrt(pow(x, 6) + pow(log(y), 2));
    double psi = fabs(y / pow(x, x) - cbrt(y / x)) + (y - x) * (cos(y - z) / (1 + pow(y - x, 2)));
    double a = pow(2, -x) * sqrt(x + pow(fabs(y), 0.25) * cbrt(exp(x - 1 / sin(z))));
    double b = pow(y, cbrt(fabs(x))) + pow(cos(y), 3) * (fabs(x - y) * (1 + pow(sin(z), 2) / sqrt(x + y)) / (exp(fabs(x - y)) + x / 2));
    double c = pow(2, pow(y, x)) + pow(3, y) - (y * (atan(z) - M_PI / 6)) / ((fabs(x) + 1) / (pow(y, 2) + 1));
    double f = (pow(y, 0.25) + cbrt(x - 1)) / (fabs(x - y) * (pow(sin(z), 2) + tan(z)));
    double g = (pow(y, x + 1) / (cbrt(fabs(y - 2)) + 3)) + ((x + y / 2) / (2 * fabs(x + y))) * pow(x + 1, -1 / sin(z));
    double h = (pow(x, y + 1) + pow(exp(1), y - 1)) / (1 + x) * (y - tan(z)) + ((1 + fabs(y - x)) + pow(fabs(pow(y - x, 2) / 2 - pow(y - x, 3) / 3), 1));

    cout << "beta = " << beta << endl;
    cout << "gamma = " << gamma << endl;
    cout << "phi = " << phi << endl;
    cout << "psi = " << psi << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "f = " << f << endl;
    cout << "g = " << g << endl;
    cout << "h = " << h << endl;

    return 0;
}
