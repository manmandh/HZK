#include <iostream>
using namespace std;
int main()
{
    long long  n;
    cout << "Input n: ";
    cin >> n;
    while (n > 9)
    {
        int tempt = n % 10;
        n /= 10;
        n += tempt;
    }
    cout << n;
}