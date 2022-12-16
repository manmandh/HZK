#include <iostream>
#include <map>
using namespace std;

int a[1000000];
int main()
{
    int n;
    cin >> n;
    int a[n];
    map<int, int> cc;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cc[a[i]]++;
    }

    int max = 0, res;
    for (auto it : cc)
    {
        if (max < it.second)
        {
            max = it.second;
            res = it.first;
        }
    }
    cout << res;
}
