#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n >= 3)
    {
        int arr[n], arr1[n - 2];
        for (int i = 0; i < n; i++)
        {
            arr[i] = i + 1;
        }
        for (int i = 0; i < n - 2; i++)
        {
            cin >> arr1[i];
        }
        sort(arr, arr + (n - 2));
        for (int i = 0; i < n; i++)
        {
            int check = 0;
            for (int j = 0; j < n - 2; j++)
            {
                if (arr[i] == arr1[j])
                {
                    check = 1;
                }
            }
            if (check == 0)
                cout << arr[i] << " ";
        }
    }
}