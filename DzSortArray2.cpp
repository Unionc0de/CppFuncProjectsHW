#include <iostream>
using namespace std;

void sortArray(int* ar) {
    bool flag = false;//сортировка пузырьком
    for (int i = 0, n = 10; i < n - i; i++) {
        flag = true;
        for (int j = 0, n = 10; j < n - i - 1; j++) {
            if (ar[j] > ar[j + 1]) {
                swap(ar[j], ar[j + 1]);
                flag = false;
            }

        }
        if (flag)break;
    }
}

void showAr(int* ar) {
    for (int i = 0; i < 10; i++) {
        cout << ar[i] << " ";
    }
}
int main()
{
    int* array = new int[10] {1, 5, 3, 9, 12, 4, 5, 6, 10, 12};
    showAr(array);
    sortArray(array);
    cout << endl;
    showAr(array);


}
