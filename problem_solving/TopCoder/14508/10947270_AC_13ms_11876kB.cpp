#include <bits/stdc++.h>
using namespace std;

class ThreeIncreasing {
    public:
    int minEaten(int a, int b, int c) {
        int ans = 0;
        if (c == 1) return -1;
        if (b >= c) ans += b - c + 1, b = c - 1;
        if (b == 1) return -1;
        if (a >= b) ans += a - b + 1;
        return ans;
    }
};