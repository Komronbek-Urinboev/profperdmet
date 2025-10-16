#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y, z;
    if (!(cin >> x >> y >> z)) return 0;

    // Простые безопасные условия для вещественных вычислений
    if (x < 0.0) { cout << "Ошибка: x должен быть >= 0 для x^(1/4)\n"; return 0; }
    if (y <= 0.0) { cout << "Ошибка: y должен быть > 0 для возведения в вещественную степень\n"; return 0; }
    if (x + y <= 0.0) { cout << "Ошибка: x + y должен быть > 0\n"; return 0; }

    double fourthRootX = pow(x, 0.25);
    double partA = x * pow(y, fourthRootX);

    double cos3y = pow(cos(y), 3.0);
    double denom = sqrt(x + y);
    double inner = x - y * (1.0 + (pow(sin(z), 2.0) / denom));
    double expo = exp(floor(x - y)) + x / 2.0;

    if (inner <= 0.0 && fabs(expo - round(expo)) > 1e-12) {
        cout << "Ошибка: база отрицательна или ноль при нецелом показателе\n";
        return 0;
    }

    double powerPart = pow(inner, expo);
    double b = partA + cos3y * powerPart;

    cout.setf(ios::fixed); cout.precision(6);
    cout << "b = " << b << "\n";
    return 0;
}
