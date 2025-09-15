#include <iostream>
using namespace std;

int main()
{
    // задача Begin 8
    double a, b;   // вхідні числа
    double avg;    // середнє арифметичне

    cout << "Задача Begin 8" << endl;
    cout << "Введіть число a: ";
    cin >> a;
    cout << "Введіть число b: ";
    cin >> b;

    // обчислення
    avg = (a + b) / 2;

    cout << "Середнє арифметичне: " << avg << endl;

    return 0;
}
