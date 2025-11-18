#include <iostream>
#include "Longlong.h" 

using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");

    Longlong a, b;

    cout << "Введіть значення a:\n";
    a.Read();
    cout << "Введіть значення b:\n";
    b.Read();

    cout << "\nРезультати:\n";
    cout << "a = "; a.Display();
    cout << "b = "; b.Display();

    cout << "a + b = "; (a + b).Display();
    cout << "a - b = "; (a - b).Display();
    cout << "a * b = "; (a * b).Display();

    cout << "a == b: " << (a == b ? "так" : "ні") << endl;
    cout << "a > b: " << (a.greater(b) ? "так" : "ні") << endl;
    cout << "a < b: " << (a.less(b) ? "так" : "ні") << endl;

    cout << "\nТест методу toString(): " << a.toString() << endl;

    system("pause");
    return 0;
}