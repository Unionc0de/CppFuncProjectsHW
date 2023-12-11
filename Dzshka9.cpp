#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    int sm[5][8];
    int sum = 0, sum2 = 0, sum3 = 0;
    int min = 999999, max = 0, minstr = 999999, maxstr = 0, minstb = 99999, maxstb = 0;
    for (int i = 0; i < 5; i++) {//заполнение массивов рандомными числами
        sum = 0;
        for (int j = 0; j < 8; j++) {
            sm[i][j] = 10 + rand() % (90);
            cout << sm[i][j] << " ";
            sum += sm[i][j];
            if (min > sm[i][j]) {
                min = sm[i][j];
            }
            if (max < sm[i][j]) {
                max = sm[i][j];
            }
            if (minstr > sum) {
                minstr = sum;
            }
            if (maxstr < sum) {
                maxstr = sum;
            }
        }
        cout << "    |" << sum << endl;
    }

    cout << "----------------------------------------" << endl;

    cout << "                            |" << endl;

    for (int j = 0; j < 8; j++) {
        sum2 = 0;
        for (int i = 0; i < 5; i++) {
            sum2 += sm[i][j];
            if (minstb > sum) {
                minstb = sum;
            }
            if (maxstb < sum) {
                maxstb = sum;
            }

        }
        cout << sum2 << " ";
        sum3 += sum2;

    }

    cout << endl;
    cout << "Общая сумма:" << sum3;
    cout << endl;
    cout << "Минимлаьное значение " << min;
    cout << endl;
    cout << "Максимаьлное значение " << max;
    cout << endl;
    cout << "Минимлаьное сумма строки " << minstr;
    cout << endl;
    cout << "Максимаьлное сумма строки " << maxstr;
    cout << endl;
    cout << "Минимлаьное сумма столбца " << minstb;
    cout << endl;
    cout << "Максимаьлное сумма столбца " << maxstb;


    
}


