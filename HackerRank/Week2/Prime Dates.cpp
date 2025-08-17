int monthDays[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

bool isLeap(int y) {
    if ((y % 400 == 0) || (y % 100 != 0 && y % 4 == 0)) return true;
    return false;
}

int findPrimeDates(int d1, int m1, int y1, int d2, int m2, int y2) {
    int result = 0;

    while (true) {
        int num = d1 * 1000000 + m1 * 10000 + y1;
        if (num % 4 == 0 || num % 7 == 0) result++;

        if (d1 == d2 && m1 == m2 && y1 == y2) break;

        d1++;
        if ((m1 == 2 && isLeap(y1) && d1 > 29) || (m1 == 2 && !isLeap(y1) && d1 > 28)) {
            d1 = 1; m1++;
        } else if (m1 != 2 && d1 > monthDays[m1]) {
            d1 = 1; m1++;
        }
        if (m1 > 12) {
            m1 = 1; y1++;
        }
    }
    return result;
}
