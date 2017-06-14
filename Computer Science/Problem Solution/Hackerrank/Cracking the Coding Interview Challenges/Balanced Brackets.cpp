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

bool is_pair(char a, char b) {
    return (a == '(' && b == ')') || (a == '[' && b == ']') || (a == '{' && b == '}');
}

bool is_left(char a) {
    return (a == '(' || a == '[' || a == '{');
}

bool is_right(char a) {
    return (a == ')' || a == ']' || a == '}');
}

bool is_balanced(string expression) {
    stack<char> s;
    for (int i = 0;i < expression.size();i ++) {
        if (is_left(expression[i])) {
            s.push(expression[i]);
        } else {
            if (!s.size()) return false;
            char top = s.top();
            if (!is_pair(top, expression[i])) return false;
            s.pop();
        }
    }
    if (s.size()) return false;
    return true;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string expression;
        cin >> expression;
        bool answer = is_balanced(expression);
        if(answer)
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

