#include <iostream>

using namespace std;

int fibonacci(int n) {
    // Complete the function.
    int x, y, z;
    x = 1;
    y = 1;
    if (n == 1) return x;
    if (n == 2) return y;
    for (int i = 3;i <= n;i ++) {
        z = x + y;
        x = y;
        y = z;
    }
    return y;
}

int main() {
    int n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}

