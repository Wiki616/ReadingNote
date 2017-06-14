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

int number_needed(string a, string b) {
    int la = a.size(), lb = b.size();
    int letters[2][27];
    memset(letters, 0, sizeof(letters));
    for (int i = 0;i < la;i ++) letters[0][a[i]-'a'] ++;
    for (int i = 0;i < lb;i ++) letters[1][b[i]-'a'] ++;
    int commonLength = 0;
    for (int i = 0;i < 26;i ++) {
        commonLength += (letters[0][i] < letters[1][i] ? letters[0][i] : letters[1][i]);
    }
    return la + lb - commonLength*2;
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}

