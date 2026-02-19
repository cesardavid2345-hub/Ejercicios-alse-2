#include <iostream>
using namespace std;

int main() {
    int arreglo[5] = {2, 4, 6, 8, 10};
    int suma = 0;

    for (int i = 0; i < 5; i++) {
        suma += arreglo[i];
    }

    cout << "Suma total: " << suma << endl;

    return 0;
}
