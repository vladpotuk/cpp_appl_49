#include <iostream>
#include "box.h"

using namespace std;

int main() {
    system("chcp 1251");
    system("cls");
    Point point1{}, point2{};

    cout << "Введіть коорлинати першої точки:\n";
    cout << "x: ";
    cin >> point1.x;
    cout << "y: ";
    cin >> point1.y;

    cout << "\nВведіть кординати другої точки:\n";
    cout << "x: ";
    cin >> point2.x;
    cout << "y: ";
    cin >> point2.y;

    double distance = calculateDistance(point1, point2);

    cout << "\nВідстань між точками: " << distance << endl;

    return 0;
}