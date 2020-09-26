#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;

int main() {
    long long int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a <= d && c <= b) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
