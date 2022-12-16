#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int m1 = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (m1 + arr[i] <= m)
        {
            m1 += arr[i];
            count++;
        }
    }
    cout << count;
}