#include <iostream>
using namespace std;
void chetnoe(int num) {//#1
    if (num % 2 == 0) {
        cout << "Четное";
    }
    else {
        cout << "Нечетное";
    }
}

bool palin(string pal) {
    bool flag = false;
    int length = pal.length();

    for (int i = 0; i < length / 2; ++i)
    {
        if (pal[i] != pal[length - i - 1])
        {
            return flag;
        }
    }
    flag = true;
    return flag;
}


int fact(int num) {//#3
    int factorial = 1;
    for (int i = 1; i < num + 1; i++) {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    setlocale(LC_ALL, "rus");
    //chetnoe(3);
    /*cout << fact(5);*/
    cout<<palin("рарар");

}

