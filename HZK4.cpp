#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count[26] = {0};
    for (int i = 0; i < s.size(); i++)
        if (s[i] >= 'a' && s[i] <= 'z')
            count[(int)s[i] - 97]++;

    int max = count[0], max1 = 0;
    for (int i = 0; i < 26; i++)
    {
        if (max < count[i])
        {
            max = count[i];
            max1 = i;
        }
    }
    cout << (char)(max1 + 97);
}
