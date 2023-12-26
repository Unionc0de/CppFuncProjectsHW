#include <iostream>
using namespace std;

int main()
{
    
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    /*int n1, n2, n3, n4; //1
    cin >> n1 >> n2 >> n3 >> n4;
    
    if (n1 > n2 && n1 > n3 && n1 > n4) {
        cout << n1;
    }
    else if (n2 > n1 && n2 > n3 && n2 > n4) {
        cout << n2;
    }

    else if (n3 > n2 && n3 > n1 && n3 > n4) {
        cout << n3;
    }

    else  {
        cout << n4;
    }*/

    /*int n, a, b; //2

    cout << "n\n";
    cin >> n;
    cout << "a,b\n";
    cin >> a >> b;

    for (int i = 0; i < n; i++) {
        cout << a << " ";
        a++;
    }*/

    /*float max;//3
    cin >> max;
    
    for (float i = 0; i <= max; i += 0.25) {
        cout << i << " ";
    }*/

    /*int n;//4
    float sr = 0, len = 0;
    cin >> n;
    while (n != 0) {
        len++;
        cin >> n;
        sr += n;
    }

    cout << sr / len;*/

    /*char sym;//5
    cin >> sym;

    if ((sym >= 65 && sym <= 90) || (sym >= 97 && sym <= 122)) cout << "true";
    else cout <<"false";*/

    //int ar[10];//6
    //int ar2[10];
    //for (int i = 0; i < 10; i++) {
    //    ar[i] = 7 + rand() % 18 - 7 + 1;
    //    cout << ar[i] << " ";
    //}

    //cout << endl;


    //for (int i = 0; i < 10; i++) {//7
    //    if (ar[i] % 2 == 0) {
    //        ar2[i] = ar[i];
    //        cout << ar2[i] << " ";
    //    }
    //}

    //int ar[10];//9

    //for (int i = 0; i < 10; i++) {
    //    ar[i] = 7 + rand() % 18 - 7 + 1;
    //    cout << ar[i] << " ";
    //}

    //cout << endl;

    //for (int i = 0; i < 10; i++) {
    //    if (ar[i] % 2 == 0) {
    //        cout << ar[i]<<" ";
    //    }
    //}

    //int n,ser1=0,ser2=0; //8
    //char sym = '0';
    //cin >> n;

    //if (n % 2 == 0) n++;
    //ser1 = round(n / 2);
    //ser2 = round(n / 2);

    //for (int i = 0; i < n; i++) {
    //    cout << " " << endl;
    //    for (int j = 0; j < n; j++) {
    //        if (i == 0) {
    //            cout << sym;
    //        }
    //        else if (i == n-1) {
    //            cout << sym;
    //        }
    //        else if (j == 0 || j == n-1) {
    //            cout << sym;
    //        }
    //        else if (i == ser2) {
    //            cout << sym;
    //        }
    //        else if (j == ser1) {
    //            cout << sym;
    //        }
    //        else {
    //            cout << " ";
    //        }
    //    }
    //}

    int ar[5][4];
    int sum = 0;
    int min = 99, max =0;
    int cord = 0;
    for (int i = 0; i < 5; i++) {
        cout << endl;
        for (int j = 0; j < 4; j++) {
            ar[i][j] = 10 + rand() % 99 - 10 + 1;
            sum += ar[i][j];
            cout << ar[i][j] << " ";

            if (max < ar[i][j]) {
                max = ar[i][j];
                cord = j;
            }

            if (min > ar[i][j]) {
                min = ar[i][j];
            }

        }

    }






}