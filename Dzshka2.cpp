// Dzshka2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    setlocale(LC_ALL, "rus");
    /*int a, a2, a3, a4, a5, a6, a7,r1,r2; #1 выдает какую - то ошибку
    cout << "введите шестизначное число\n";
    cin >> a;
    a2 = a / 100000;
    a3 = (a % 100000) / 10000;
    a4 = (a % 10000) / 1000;
    a5 = (a % 1000) / 100;
    a6 = (a % 100) / 10;
    a7 = a % 10;
    r1 = a2 + a3 + a4;
    r2 = a5 + a6 + a7;

    if ( r1 - r2 = 0 ) {
        cout << "число счастливое";
    }
    
    else {
        cout << "число несчастливое";
    }*/

    /*int a, a1, a2, a3, a4; #2 
    
    cout << "Введите четырехзначное число\n";
    cin >> a;
    a1 = a / 1000;
    a2 = (a % 1000) / 100;
    a3 = (a % 100) / 10;
    a4 = a % 10;
    
    
    cout << a2 << a1 << a4 << a3;*/

    int a1, a2, a3, a4, a5, a6, a7,maxx;
    cout << "Введите 7 чисел \n";
    cin >> a1;
    cin >> a2;
    cin >> a3;
    cin >> a4;
    cin >> a5;
    cin >> a6;
    cin >> a7;

    maxx = std::max({a1,a2,a3,a4,a5,a6,a7});
    cout << maxx; 
}

 