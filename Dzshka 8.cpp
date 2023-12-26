#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    const int size = 10;
    int arr[size];

    // Заполнение массива случайными числами от 1 до 10
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 10 + 1;
    }

    cout << "Исходный массив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    
    int count[size] ;

    // Подсчет количества каждого элемента в массиве
    for (int i = 0; i < size; i++) {
        count[arr[i] - 1]++;
    }

    // Перезапись отсортированных элементов обратно в массив
    int index = 0;
    for (int i = 0; i < size; i++) {
        while (count[i] > 0) {
            arr[index++] = i + 1;
            count[i]--;
        }
    }

    std::cout << "\nОтсортированный массив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

}



