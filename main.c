#include <iostream>
using namespace std;

int main() 
{
     double a, b, d, result;

    cout << "Задача Begin 44" << endl;
    cout << "Введіть число a: ";
    cin >> a;
    cout << "Введіть число b: ";
    cin >> b;

    // різниця
    d = a - b;

    // модуль різниці (через if)
    if (d >= 0)
        result = d;
    else
        result = -d;

    cout << "Різниця за модулем |a - b| = " << result << endl;

    return 0;
}
