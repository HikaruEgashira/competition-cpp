#include <bits/stdc++.h>
using namespace std;

// 未完成
int times(int a, int n)
{
    int count = 1;
    while (a - pow(n, count) >= 0)
    {
        count++;
    }
    return count - 1;
}

int main()
{
    int a, six, nine, one, count, limit;
    limit = 100000;
    count = 0;
    six = 6;
    nine = 9;
    one = 1;
    cin >> a;

    int sixlim = times(a, 6);
    int ninelim = times(a, 9);

    int len = sixlim + ninelim;
    for (size_t h = 0; h < len; h++)
    {
        if (h == 1)
        {
            for (size_t i = 0; i < sixlim; i++)
            {
                cout << pow(6, i + 1) << endl;
            }
            for (size_t j = 0; j < ninelim; j++)
            {
                cout << pow(9, j + 1) << endl;
            }
        }
        if (h == 2)
        {
            for (size_t i = 0; i < count; i++)
            {
                /* code */
            }
        }
    }

    cout << sixlim << endl;
    cout << ninelim << endl;

    return 0;
}