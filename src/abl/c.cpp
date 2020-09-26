#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    dsu d(n);

    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        d.merge(a - 1, b - 1);
    }

    cout << d.groups().size() - 1 << endl;
}
