#include <bits/stdc++.h>
using namespace std;

// 絶対値
int main() {
    int a, b, diff;
    cin >> a >> b;
    diff = b - a;
    for(int i = 1; i < diff - 1; i++) {
        a -= i;
    }
    cout << abs(a) << endl;
    return 0;
}