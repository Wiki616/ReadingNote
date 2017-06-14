#include <bits/stdc++.h>
using namespace std;

class IceCream {
    
    public: 
        int flavor; 
        int index;

        IceCream(int flavor, int index) {
             this->flavor = flavor;
			     this->index = index;
       }
};

bool compare(IceCream a, IceCream b) {
    return a.flavor < b.flavor;
}

int main() {
    int t;
    int n, m;
    cin >> t;
    for(int test = 0; test < t; test++) {       
        cin >> m >> n;
        vector<IceCream> arr;
        arr.reserve(n); 

        for (int i = 0; i < n; i++) {
            int cost;
            cin >> cost;
            arr.push_back(IceCream(cost, i + 1));
        }

        sort(arr.begin(), arr.end(), compare);
        int firstIndex = 100000, secondIndex = 100000;
        int i = 0, j = n-1;
        while (i < j && arr[i].flavor + arr[j].flavor != m) {
            if (arr[i].flavor + arr[j].flavor > m) {
                j --;
            } else {
                i ++;
            }
        }
        if (i < j && arr[i].flavor + arr[j].flavor == m) {
            cout << min(arr[i].index, arr[j].index) << " " << max(arr[i].index, arr[j].index) << endl;
        }

    }

}


