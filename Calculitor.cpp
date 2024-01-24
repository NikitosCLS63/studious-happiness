#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");

    char operation;
    double num1, num2, result;
    char choice;

    do {

        cout << "Введите операцию (Сложения[+], Вычетания[-], Частное[/], Произведение[*], Возведение в степень[^], Нахождение квадратного корня[k], Нахождение 1% от числа[%], Факториал[F], ВЫХОД[q]): ";
        cin >> operation;

        if (operation == 'q') {
            cout << "Программа завершена.";
            break;
        }
        
        cout << "Введите первое число: ";
        cin >> num1;

        if (operation != 'k' && operation != '%' && operation != 'F') {
            cout << "Введите второе число: ";
            cin >> num2;
        }
        
        switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "Результат сложения: " << result;
            break;
        case '-':
            result = num1 - num2;
            cout << "Результат вычитания: " << result;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Результат частного: " << result;
            }
            else {
                cout << "Ошибка: деление на ноль!";
            }
            break;
        case '*':
            result = num1 * num2;
            cout << "Результат произведения: " << result;
            break;
        case '^':
            result = pow(num1, num2);
            cout << "Результат возведения в степень: " << result;
            break;
        case 'k':
            result = sqrt(num1);
            cout << "Результат квадратного корня: " << result;
            break;
        case '%':
            result = (1.0 / 100.0) * num1;
            cout << "Результат 1% от числа: " << result;
            break;
        case 'F':
            result = tgamma(num1 + 1);
            cout << "Результат факториала: " << result;
            break;
        default:
            cout << "Неверная операция!";
        }
        
        cout << "\nЖелаете выполнить еще одну операцию? (y/n): ";
        cin >> choice;
        

    } while (choice != 'n');

    return 0;



}
