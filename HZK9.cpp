#include <bits/stdc++.h>
using namespace std;
const int inf = 1e9 + 7;
const int N = 1000111;
int frefix[100005], suffix[100005];
void print() { return; }
void println()
{
	cout << endl;
	return;
}
template <typename T, typename... Args>
void print(T a, Args... args)
{
	cout << a << " ";
	print(args...);
}
template <typename T, typename... Args>
void println(T a, Args... args)
{
	cout << a << " ";
	println(args...);
}
int32_t main(int32_t argc, char *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string s;
	cin >> s;
	int n = s.size();
	s = '#' + s;
	for (int i = 1; i <= n; ++i)
	{
		if (s[i] == '1')
		{
			frefix[i] = frefix[i - 1] + 1;
		}
	}
	for (int i = n; i >= 1; --i)
	{
		if (s[i] == '1')
			suffix[i] = suffix[i + 1] + 1;
	}
	int res = 0;
	for (int i = 1; i <= n; ++i)
	{
		if (s[i] == '0')
			res = max(res, frefix[i - 1] + suffix[i + 1] + 1);
	}
	cout << res;
}