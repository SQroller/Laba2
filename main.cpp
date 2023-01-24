#include <iostream>
#include "Evo.h"

using namespace std;

int main() {
    double r;
    double t;
    cout << "Enter the circle radius:\n";
    cin >> r;
    while (true) {
        if (cin.fail()) {
            cin.clear();
            cin.ignore();
            cout << "Incorrect value. Enter value again:\n";
            cin >> r;
        }else break;
    }
    cout << "Enter the rotation angle of the circle radius (in degrees):\n";
    while (true) {
        cin >> t;
        if (cin.fail()) {
            cin.clear();
            cin.ignore();
            cout << "Incorrect value. Enter value again:\n";
        }else if (t > 360) {
            cout << "Incorrect value. Enter value again:\n";
        }else break;
    }
    Evo evo(r, t);
    cout
            << "Distance to the center in the polar coordinate system depending on the angle for a point belonging to the involute:\n";
    cout << evo.d_rast() << "\n";
    cout
            << "Coordinates in the Cartesian system coordinate depending on the angle of rotation of the radius from the initial position:\n";
    cout << evo.d_x() << "\n";
    cout << evo.d_y() << "\n";
    cout
            << "The length of the involute arc depending on the angle of rotation of the radius from the initial position:\n";
    cout << evo.d_dugi() << "\n";
    cout << "The radius of curvature of the involute depending on the length of its arc:\n";
    cout << evo.d_radius(evo.d_dugi()) << "\n";
    cout << "Involute equations in polar coordinate system:\n";
    cout << "f = sqrt(d_dugi^2-r^2)/2-arccos(r/d_dugi)";
    return 0;
}
