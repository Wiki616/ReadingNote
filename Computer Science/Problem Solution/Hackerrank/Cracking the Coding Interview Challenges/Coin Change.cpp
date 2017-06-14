#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

long long make_change(vector<int> coins, int money) {
    long long f[51][251];
    for (int i = 0;i <= money;i ++) f[0][i] = 0;
    for (int i = 0;i <= coins.size();i ++) f[i][0] = 1;
    for (int i = 1;i <= coins.size();i ++) {
        for (int j = 1;j <= money;j ++) {
            f[i][j] = f[i-1][j];
            if (j >= coins[i-1]) {
                f[i][j] += f[i][j - coins[i-1]];
            }
        }
    }
    return f[coins.size()][money];
}

int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<int> coins(m);
    for(int coins_i = 0;coins_i < m;coins_i++){
       cin >> coins[coins_i];
    }
    cout << make_change(coins, n) << endl;
    return 0;
}

