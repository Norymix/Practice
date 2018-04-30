#include <iostream>
#include <cstdlib>

using namespace std;

double max(double x, double y)
{
    if (x < y) {
        return x;
    }
    return x;
}

double min(double x, double y)
{
    if (x > y) {
        return y;
    }
    return x;
}


bool thc(double x, double y, double z, double w, double a, double b)
{
    double k, c;

    if (z == x) {
        return (a == x && b >= min(y, w) && x <= max(y, w));
    }

    k = (w - y) / (z - x);
    c = y - k * x;

    return b == a * k + c;
}

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "Russian");

    double x, y; // Координаты начала отрезка
    double z, w; // Координаты конца отрезка
    double a, b; // Координаты точки

    bool result;

    cout << "Координаты начала отрезка: ";
    cin >> x >> y;

    cout << "Координаты конца отрезка: ";
    cin >> z >> w;

    cout << "Координаты точки: ";
    cin >> a >> b;

    result = thc(x, y, z, w, a, b);
    cout << result << endl;
    //system("pause");

    return 0;
}