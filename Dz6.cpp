int min, max;
    int c = 0;
    cin >> min;
    cin >> max;
    bool f;
    for (int i = min; i <= max; i++) {
        f = true;
        for (int j = 2; j < sqrt(i); j++) {
            if (i % j == 0) {
                f = false;
                break;
            }
        }
        if (f)c++;
    }
    cout << c;

