#include <iostream>
using namespace std;

int main() {
    cout << fixed;

    double ft_cm = 30.48;
    int mi_cm = 160934;

    cout.precision(1);
    cout << "9.2ft = " << 9.2 * ft_cm << "cm";
    cout << endl;
    cout << "1.3mi = "<< 1.3 * mi_cm << "cm";
    return 0;
}