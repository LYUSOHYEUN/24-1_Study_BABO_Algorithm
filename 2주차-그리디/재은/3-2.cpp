// 큰 수의 법칙
#include <iostream>
#include <algorithm>
using namespace std;

int n, m, k;

int main()
{
    cin >> n >> m >> k;

    int *A = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    sort(A, A + n);

    int first = A[n - 1];
    int second = A[n - 2];

    int cnt = (m / (k + 1)) * k;
    cnt += m % (k + 1);

    int result = 0;
    result += cnt * first;        // 가장 큰 수 더하기
    result += (m - cnt) * second; // 두 번째로 큰 수 더하기

    cout << result << '\n'; // 최종 답안 출력
}