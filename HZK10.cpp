#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int giam(int n)
{
    while (n >= 10)
    {
        int a = n % 10;
        if (a >= (n / 10) % 10)
            return 0;
        n /= 10;
    }
    return 1;
}
int dq(int n)
{
    string s = to_string(n);
    if (s.size() >= 10)
        return -1;
    if (giam(n))
        return n;
    return dq(n + 1);
}
int32_t main(int32_t argc, char *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int size = 0;
    int temp = n;
    while (n)
    {
        size++;
        n /= 10;
    }
    if (size >= 10)
    {
        cout << -1;
        return 0;
    }
    while (1)
    {
        if (giam(temp))
        {
            cout << temp;
            break;
        }
        temp++;
    }
}