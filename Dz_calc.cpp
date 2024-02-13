#include <iostream>
#define random(min,max) (min + rand() % (max - min + 1))
using namespace std;

int pluus(int a, int b) {//калькулятор с функциями и перегрузками 
    return a + b;
}

double pluus(double a, double b) {
    return a + b;
}

int minuse(int a, int b) {
    return a - b;
}

double minuse(double a, double b) {
    return a - b;
}

int umn(int a, int b) {
    return a * b;
}

double umn(double a, double b) {
    return a * b;
}

int delit(int a, int b) {
    return a / b;
}

double delit(double a, double b) {
    return a / b;
}

int kuropatka(int a, int b, char dev) {
    int result = 0;
    if (dev == '+') {
        return result = pluus(a, b);
    }

    else if (dev == '-') {
        return  result = minuse(a, b);
    }

    else if (dev == '*') {
        return result = umn(a, b);
    }

    else if (dev ==  '/') {
        return  result = delit(a, b);
    }

    else {
        return 0;
    }
}

double kuropatka(double a, double b, char dev) {
    double result = 0;
    if (dev == '+') {
        return result = pluus(a, b);
    }

    else if (dev == '-') {
        return  result = minuse(a, b);
    }

    else if (dev == '*') {
        return result = umn(a, b);
    }

    else if (dev == '/') {
        return  result = delit(a, b);
    }

    else {
        return 0;
    }
}

int main()
{
   
    int a;
    int b;
    char dev;
    cin >> a;
    cin >> b;
    cin >> dev;
    cout << kuropatka(a, b, dev);



}
