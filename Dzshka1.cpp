

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus"); //#1
    /*
    float r;
    cout << "Введите радиус\n";
    cin >> r; 
    cout << "\nПлощадь круга:\n ";
    cout << r*r*3.1415;
    
    cout << "\nДлина окружности:\n ";
    
    cout << r * 2 * 3.1415;
    
    cout << "\nДиаметр:\n ";
    
    cout << r * 2;
    
    */

    /*float c1,c2,c3,c4, sum = 4; #2
    cout << "Введите оценки за четверти\n";
    cin >> c1;
    cin >> c2;
    cin >> c3;
    cin >> c4;
    cout << (c1 + c2 + c3 + c4)/sum; */

    int m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12; 
    cout << "Введите зарплату: \n"; 
    cin >> m1; 
    cin >> m2;
    cin >> m3;
    cin >> m4;
    cin >> m5;
    cin >> m6;
    cin >> m7;
    cin >> m8;
    cin >> m9;
    cin >> m10;
    cin >> m11;
    cin >> m12;
    cout << "Зп за первый квартал\n";
    cout << m1 + m2 + m3;
    cout << "\nЗп за второй квартал\n";
    cout << m4 + m5 + m6;
    cout << "\nЗп за третий квартал\n";
    cout << m7 + m8 + m9;
    cout << "\nЗп за четвертый квартал\n";
    cout << m10 + m11 + m12;
}



