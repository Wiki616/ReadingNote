#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

priority_queue<int> heap1;
priority_queue<int,vector<int>,greater<int> > heap2;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
       if (a_i % 2 == 0) {
           if (a_i == 0) heap1.push(a[a_i]);
           else {
               int h2top = heap2.top();
               if (a[a_i] <= h2top) {
                   heap1.push(a[a_i]);
               } else {
                   heap1.push(h2top);
                   heap2.pop();
                   heap2.push(a[a_i]);
               }
           }
           printf("%.1f\n", (double)heap1.top());
       } else {
           int h1top = heap1.top();
           if (a[a_i] >= h1top) {
               heap2.push(a[a_i]);
           } else {
               heap2.push(h1top);
               heap1.pop();
               heap1.push(a[a_i]);
           }
           printf("%.1f\n", (heap1.top() + heap2.top()) / 2.0);
       } 
    }
    return 0;
}

