#include <iostream>
using namespace std;
int main() {
    int money;
    cout << "Введите сколько денег вы хотите положить: " << endl;
    cin >> money;
    if (money % 100 == 0 && money <= 150000)
    {
        if (money >= 5000)
        {
            cout << " Выдает: " << money / 5000 << " по 5000рублей" << endl;
            money %= 5000;
        }
        if (money >= 2000)
        {
            cout << " Выдает: " << money / 2000 << " по 2000рублей" << endl;
            money %= 2000;
        }
        if (money >= 1000)
        {
            cout << " Выдает: " << money / 1000 << " по 1000рублей" << endl;
            money %= 1000;
        }
        if (money >= 100)
        {
            cout << " Выдает: " << money / 100 << " по 100 рублей" << endl;
            money %= 100;
        }
    }
}