#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double X_start, X_end, dX;
    cout << " X= ";
    cin >> X_start;
    cout << " X= ";
    cin >> X_end;
    cout << " dX= ";
    cin >> dX;
    if (dX <= 0) {
        cout << " dX +" << endl;
        return 1;
    }
    cout << setw(10) << "X" << setw(20) << "Y" << endl;
    cout << "--------------------------------" << endl;
    for (double x = X_start; x <= X_end; x += dX) {
        double y;

        if (x <= -1) {
            y = 13.5 - 2 * x - exp(0.4 + x);
        }
        else if (x > -1 && x < 1) {
            y = 1 - pow(sin(x), 2);
        }
        else {
            y = cos(x) / (1 + pow(sin(x), 2));
        }
        cout << setw(10) << x << setw(20) << y << endl;
    }

    return 0;
}