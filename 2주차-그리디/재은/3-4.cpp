// 1이 될 때까지

#include <iostream>
#include <algorithm>
using namespace std;

int n, k;
int cnt = 0;
void func3()
{
    cin >> n >> k;

    while (n > 1)
    {
        if (n % 5 == 0)
        {
            n = n / 5;
            cnt += 1;
        }
        else
        {
            n = n - 1;
            cnt += 1;
        }
    }

    cout << cnt << '\n';
}