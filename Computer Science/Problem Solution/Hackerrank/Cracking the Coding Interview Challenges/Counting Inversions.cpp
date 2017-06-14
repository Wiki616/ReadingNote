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

long long merge(int l, int r, vector<int> &a) {
    int mid = (l + r) >> 1;
    vector<int> left;
    vector<int> right;
    for (int i = l;i <= mid;i ++) left.push_back(a[i]);
    for (int i = mid+1;i <= r;i ++) right.push_back(a[i]);
    int i = 0, j = 0;
    int pos = 0;
    long long num = 0;
    while (i < left.size() && j < right.size()) {
        if (left[i] <= right[j]) {
            a[l+pos++] = left[i++];
        } else {
            a[l+pos++] = right[j++];
            num += left.size() - i;
        }
    }
    for (;i < left.size();) a[l+pos++] = left[i ++];
    for (;j < right.size();) a[l+pos++] = right[j ++];
    return num;
}

long long sort(int l, int r, vector<int> &a) {
   int mid = (l+r) >> 1;
   if (l == r) return 0; 
   long long numleft = sort(l, mid, a);
   long long numright = sort(mid+1, r, a);
   long long numMerge = merge(l, r, a);
   return numleft + numright + numMerge;
}

long long count_inversions(vector<int> &a) {
   return sort(0, a.size()-1, a);    
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int arr_i = 0;arr_i < n;arr_i++){
           cin >> arr[arr_i];
        }
        cout << count_inversions(arr) << endl;
    }
    return 0;
}

