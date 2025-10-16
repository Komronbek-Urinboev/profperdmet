#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y, z;
    if (!(cin >> x >> y >> z)) return 0;

    // Области определения
    if (x == 0.0) { cout << "Ошибка: x не должен быть 0\n"; return 0; }
    double y_over_x = y / x;
    if (y_over_x < 0.0) { cout << "Ошибка: y/x должен быть >= 0\n"; return 0; }
    double ymx = y - x;
    if (ymx <= 0.0) { cout << "Ошибка: y - x должен быть > 0\n"; return 0; }

    double term1 = pow(x, x);
    double term2 = cbrt(y_over_x) * sqrt(y_over_x);
    double term3 = ymx * ((cos(y) - z) / sqrt(ymx)) * (1.0 + (ymx * ymx) / (1.0 + ymx * ymx));
    double psi = fabs(term1 - term2 + term3);

    cout.setf(ios::fixed); cout.precision(6);
    cout << "psi = " << psi << "\n";
    return 0;
}
