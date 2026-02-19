#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double P, r, n, t;

    cout << "Principal: ";
    cin >> P;

    cout << "Tasa anual (decimal): ";
    cin >> r;

    cout << "Veces por anio: ";
    cin >> n;

    cout << "Anos: ";
    cin >> t;

    double A = P * pow((1 + r/n), n*t);

    cout << "Monto final: " << A << endl;

    return 0;
}
