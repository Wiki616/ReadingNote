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

int n;
int m;
int dx[8] = {1,-1,0,0,1,1,-1,-1};
int dy[8] = {0,0,1,-1,1,-1,1,-1};
bool h[11][11];
int sum = 0;
int maxCount = 0;
int grid[11][11];

void floodfill(int x, int y) {
    h[x][y] = true;
    sum ++;
    for (int i = 0;i < 8;i ++) {
        int tx = x + dx[i];
        int ty = y + dy[i];
        if (tx >= 0 && tx < n  &&  ty >= 0 && ty
            < m && !h[tx][ty] && grid[tx][ty] == 1) {
            floodfill(tx, ty);
        }
    }
}

int get_biggest_region() {
    for (int i = 0;i < n;i ++)
        for (int j = 0;j < m;j ++)
            if (grid[i][j] == 1 && !h[i][j]) {
                sum = 0;
                floodfill(i, j);
                if (maxCount < sum) maxCount = sum;
            }
    return maxCount;
}

int main(){
    cin >> n;
    cin >> m;
    for(int grid_i = 0;grid_i < n;grid_i++){
       for(int grid_j = 0;grid_j < m;grid_j++){
          cin >> grid[grid_i][grid_j];
       }
    }
    memset(h, false, sizeof(h));
    cout << get_biggest_region() << endl;
    return 0;
}

