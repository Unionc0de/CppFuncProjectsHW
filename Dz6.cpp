

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int min, max,j = 0;
    cout << "Введите диапозоны";
    cin >> min >> max;
    if (min > max) swap(min, max);

    for (int i = min; i <= max; i++) {
        if (i % i == 0 && i % 1 == 0 && (i % 2 <= 1 && i % 2 >= 2)) i++;
        j = i;
    }
    
    cout << j;//почему то не работает проверка 

}

