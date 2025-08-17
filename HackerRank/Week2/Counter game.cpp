#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(unsigned long long n) {
    return (n && !(n & (n - 1)));
}

string counterGame(unsigned long long n) {
    int moves = 0;

    while (n > 1) {
        if (isPowerOfTwo(n)) {
            n >>= 1;
        } else {
            unsigned long long p = 1ULL << (63 - __builtin_clzll(n)); 
            n -= p;
        }
        moves++;
    }

    return (moves % 2 == 1 ? "Louise" : "Richard");
}
