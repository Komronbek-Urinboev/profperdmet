#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y, z;
    if (!(cin >> x >> y >> z)) return 0;

    // Области определения
    if (y < 0.0) { cout << "Ошибка: y должен быть >= 0\n"; return 0; }
    double fourthRootY = pow(y, 0.25);
    if (x + fourthRootY < 0.0) { cout << "Ошибка: x + y^(1/4) должен быть >= 0\n"; return 0; }
    double sinz = sin(z);
    if (sinz == 0.0) { cout << "Ошибка: sin(z) не должен быть 0\n"; return 0; }

    double part1 = pow(2.0, -x);
    double part2 = sqrt(x + fourthRootY);
    double numerator = pow(y, 1.5) * exp(x - 1.0);
    double part3 = cbrt(numerator / sinz);
    double a = part1 * part2 * part3;

    cout.setf(ios::fixed); cout.precision(6);
    cout << "a = " << a << "\n";
    return 0;
}
