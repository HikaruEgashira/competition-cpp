#include <bits/stdc++.h>
using namespace std;

// 18
// int main() {
//     int a, b;
//     cin >> a;
//     b = a / 1000;

//     if(b < 0.1) {
//         if(a < 100)
//             cout << "00" << endl;
//         else
//             cout << "0" << (a / 100) << endl;
//     } else if(b >= 1 && b <= 5) {
//         cout << b * 10 << endl;
//     } else if(b >= 6 && b <= 30) {
//         cout << b + 50 << endl;
//     } else if(b >= 35 && b <= 70) {
//         cout << ((b - 30) / 5) + 80 << endl;
//     } else {
//         cout << 89 << endl;
//     }

//     return 0;
// }

int main() {
    int a, ans;
    cin >> a;

    if(a < 100) {
        ans = 0;
    } else if(a <= 5000) {
        ans = a / 100;
    } else if(a <= 30000) {
        ans = a / 1000 + 50;
    } else if(a <= 70000) {
        ans = (a / 1000 - 30) / 5 + 80;
    } else {
        ans = 89;
    }

    if(ans < 10) {
        cout << 0;
    }
    cout << ans << endl;
}