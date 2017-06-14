#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool is_prime(int n) {
    int i = 2;
    if (n == 1) return false;
    if (n == 2) return true;
    while (i*i <= n) {
        if (n % i == 0) return false;
        i ++;
    }
    return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;
    cin >> N;
    for (int i = 0;i < N;i ++) {
        int number;
        cin >> number;
        if (is_prime(number)) cout << "Prime" << endl;
        else {
            cout << "Not prime" << endl;
        }
    }
    return 0;
}

