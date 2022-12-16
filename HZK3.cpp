#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Input amount question: ";
    cin >> n;
    long long int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
    }
    for (int i = 0; i < n; i++)
    {
        long long int sum = 0;
        for (int j = arr[i][0]; j <= arr[i][1]; j++)
            sum += j;
        cout << sum << endl;
    }
}