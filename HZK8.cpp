#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count = 0, max = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1' && s[i + 1] == s[i])
        {
            count++;
            if (max <= count)
                max = count;
        }
        else
            count = 0;
    }
    cout << max + 1;
}