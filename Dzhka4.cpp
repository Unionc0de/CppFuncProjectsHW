#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "rus");
    /*int a, b, c;#1.1
    cout << "Введите три числа"; 
    cin >> a >> b >> c;
    cout << (a + b) * c;*/

    /*int a, b, c; #1.2
    cout << "Введите три числа";
    cin >> a >> b >> c;
    if (a > b > c) {
        cout << a;
    }

    else if (b > a > c) {
        cout << b;
    }

    else {
        cout << c;
    }*/

    /*int a, b; #1.3
    cout << "Введите три числа";
    cin >> a >> b;

    if (a % 2 == 0) {
        cout << a;
    }

    else if (b % 2 == 0) {
        cout << b;
    }

    else {
        cout << "Четных чисел нет";
    }*/

    /*int a, b, c;#2.1
    cout << "Введите три числа";
    cin >> a >> b >> c;
    cout << (a + b) * c;*/

    /*float a,b; #2.2
    cout << "Введите температуру в градусах Цельсия: ";
    cin >> a;

    b = (a * 9 / 5) + 32;
    cout << "Температура в градусах Фаренгейта: " << b ;*/

    /*float a, b,c; #2.3
    cout << "Введите длину прямоугольника: ";
    cin >> a;
    cout << "Введите ширину прямоугольника: ";
    cin >> b;

    float c = a * b;
    cout << "Площадь прямоугольника: " << c << endl;*/

    /*int a, b, c; #3.1
    cout << "Введите три числа \n";
    cin >> a >> b >> c;
    
    if (a == 1 || b == 1 || c == 1) {
        cout << "one";
    }

    else {
        cout << "unkown";
    }*/

    /*int a, b; #3.2 
    cout << "Введите два числа \n";
    cin >> a >> b ;
    
    if (a + b < 10) {
        cout << "no";
    }

    else {
        cout << "yes";
    }*/

    /*int a, b; #3.3
    cout << "Введите два числа \n";
    cin >> a >> b;

    if (a * b > 20) {
        cout << "yes";
    }

    else {
        cout << "no";*/

    /*float a, b, c; #4.1
    cout << "Введите длину первой стороны: ";
    cin >> a;
    cout << "Введите длину второй стороны: ";
    cin >> b;
    cout << "Введите длину третьей стороны: ";
    cin >> c;

    if (a == b && b == c) {
        cout << "Треугольник равносторонний." << endl;
    }
    else if (a == b || b == c || a == c) {
        cout << "Треугольник равнобедренный." << endl;
    }
    else {
        cout << "Треугольник разносторонний." << endl;
    }*/

    /*int a; 4.2
    cout << "Введите текущее время (в часах, 0-23): ";
    cin >> a;

    if (a >= 5 && a < 12) {
        cout << "Утро." << endl;
    } else if (a >= 12 && a < 18) {
        cout << "День." << endl;
    } else if (a >= 18 && a < 22) {
        cout << "Вечер." << endl;
    } else {
        cout << "Ночь." << endl;
    }*/

    /*int a; #4.3   
    cout << "Введите число: ";
    cin >> a;

    if (a >= 0 && a <= 9) {
        cout << "Число находится в диапазоне 0-9." << endl;
    } else if (a >= 10 && a <= 19) {
        cout << "Число находится в диапазоне 10-19." << endl;
    } else if (a >= 20 && a <= 29) {
        cout << "Число находится в диапазоне 20-29." << endl;
    } else {
        cout << "Число не попадает в указанные диапазоны." << endl;
    }*/

    /*float a, b; #5.1
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;

    cout << "Наибольшее число: " << ((a > b) ? a : b) << endl;*/

    /*int a; #5.2
    cout << "Введите кол-во дней в году";
    cin >> a;

    cout << ((a > 365 && a <= 366)? "Високосный": "Не високосный");*/

    /*int a; #5.3
    cout << "Введите число";
    cin >> a;

    cout << ((a % 2 == 0)? "Четное": "Не Четное");*/

    /*int a; #6.1
    cout << "Введите число от 1 до 7: ";
    cin >> a;

    switch (a) {
        case 1:
            cout << "Понедельник" << endl;
            break;
        case 2:
            cout << "Вторник" << endl;
            break;
        case 3:
            cout << "Среда" << endl;
            break;
        case 4:
            cout << "Четверг" << endl;
            break;
        case 5:
            cout << "Пятница" << endl;
            break;
        case 6:
            cout << "Суббота" << endl;
            break;
        case 7:
            cout << "Воскресенье" << endl;
            break;
        default:
            cout << "Ошибка: неверный номер дня." << endl;*/

    /*int a; #6.2
    cout << "Введите текущее время (в часах, 0-23): ";
    cin >> a;

    switch (a) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            cout << "Ночь" << endl;
            break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
            cout << "Утро" << endl;
            break;
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
            cout << "День" << endl;
            break;
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
            cout << "Вечер" << endl;
            break;
        default:
            cout << "Некорректное время" << endl;
    }*/

    /*int a;#6.3
    cout << "Введите оценку (от 1 до 5): ";
    cin >> a;

    switch (a) {
        case 1:
            cout << "Очень плохо" << endl;
            break;
        case 2:
            cout << "Неудовлетворительно" << endl;
            break;
        case 3:
            cout << "Удовлетворительно" << endl;
            break;
        case 4:
            cout << "Хорошо" << endl;
            break;
        case 5:
            cout << "Отлично" << endl;
            break;
        default:
            cout << "Некорректная оценка" << endl;
    }*/





}

