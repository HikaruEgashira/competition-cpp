#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr;
    arr.push_back(0);

    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if(abs(arr.back() - a) <= k) {
            arr.push_back(a);
        }
    }

    cout << arr.size() - 1 << endl;
}
