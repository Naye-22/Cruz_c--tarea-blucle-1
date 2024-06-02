#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int intentos = 3;

    for (int i = 1; i <= intentos; ++i) {
        int dado1 = rand() % 6 + 1;
        int dado2 = rand() % 6 + 1;
        cout << "Intento " << i << ": Dado 1 = " << dado1 << ", Dado 2 = " << dado2 << endl;
        if (dado1 == dado2 || (dado1 + dado2) == 7) {
            cout << "¡Felicidades! Ha ganado en el intento " << i << "." << endl;
            break; 
        }

        if (i == intentos) {
            cout << "Lo siento, ha agotado los " << intentos << " intentos." << endl;
        }
    }

    return 0;
}